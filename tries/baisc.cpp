#include <iostream>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char a)
    {
        data = a;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
public:
    TrieNode *node;

private:
    void insertUtil(TrieNode *node, string word)
    {
        if (word.length() == 0)
        {
            node->isTerminal = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (node->children[index] != NULL)
        {
            // present case
            child = node->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            node->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }
    bool searchUtil(TrieNode *node, string word)
    {
        if (word.length() == 0)
        {
            return node->isTerminal;
        }
        int index = word[0] - 'A';
        if (node->children[index] && node->children[index]->data == word[0])
        {
            return searchUtil(node->children[index], word.substr(1));
        }
        else
        {
            return false;
        }
    }
    bool removeUtil(TrieNode *node, string word)
    {
        if (word.length() == 0 && node->isTerminal)
        {
            // we found the word to remove;
            // check wheater it is end branch node or not
            int count = 0;
            for (int i = 0; i < 26; i++)
            {
                if (node->children[i])
                    count++;
            }
            if (count == 0)
            {
                // delete the node;
                node->isTerminal = false;
                delete node;
                node = NULL;
            }
            if (count > 0)
            {
                node->isTerminal = false;
            }
            return true;
        }
        if (word.length() == 0 && !node->isTerminal)
        {
            // not found;
            return false;
        }
        int index = word[0] - 'A';
        if (node->children[index] && node->children[index]->data == word[0])
        {
            return removeUtil(node->children[index], word.substr(1));
            
        }
        else
        return false;
    }

public:
    Trie()
    {
        node = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        insertUtil(node, word);
        cout << word << " has been added" << endl;
    }
    void search(string word)
    {
        int x = searchUtil(node, word);
        if(x)
        cout<<word<<" found"<<endl;
        else
        cout<<word<<" not found"<<endl;
    }
    void removeWord(string word)
    {
        bool x = removeUtil(node, word);
        if (x)
            cout << word << " has been removed" << endl;
        else
            cout << word << " not found in the trie" << endl;
            
    }
};
int main()
{
    Trie *t = new Trie();
   t->insertWord("HELLO");
    t->insertWord("BYEBYE");
    t->search("HELLO");
    t->insertWord("HELLOO");
    t->search("HELLOO");
    t->removeWord("HELLOO");
    t->search("HELLO");
    t->search("HEL");
    t->removeWord("BYEB");
    t->insertWord("APPLE");
    t->insertWord("APPLE");
    t->search("APP");


}