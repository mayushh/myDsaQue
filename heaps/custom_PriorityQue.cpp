#include<iostream>
#include<queue>

using namespace std;
class student{
    public:
    int marks;
    string name;
    student(string name,int marks){
        this->name = name;
        this->marks = marks;
    }
};
class comp{
    public:
    bool operator()(const student&a,const student&b){
        if(a.marks == b.marks)
        return (a.name > b.name);
        return (a.marks < b.marks);
    }
};
int main(){
    student s1("ayush",12),s2("hariom",12),s3("shreyansh",90),s4("harshit",40),s5("bittu",50);
    priority_queue<student,vector<student>,comp> pq;
    pq.push(s1);
    pq.push(s2);
    pq.push(s3);
    pq.push(s4);
    pq.push(s5);
    while(!pq.empty()){
        cout<<pq.top().name<<pq.top().marks<<endl;
        pq.pop();
    }
}