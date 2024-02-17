#include<iostream>
using namespace std;
 
 int main(){
    // print inverted triangle
    for (int i = 1; i < 20; i++)
    {
        for (int j = 19; j > i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // print  trinagle
    for (int i = 1; i < 20; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //print hollow rectangle
    for (int row = 0; row < 4; row++)
    {
        if (row == 0||row == 3)
        {
            for (int i = 0; i < 5; i++)
            {
            cout<<"* ";
            }
            
        }
        else{
            cout<<"* ";
            for (int col = 0; col < 4; col++)
            {
                cout<<"  ";
            }
            
        }
                    cout<<"* ";

        cout<<endl;
        
    }
    //print hollow square
    int count = 7;
    for (int row = 0; row < count; row++)
    {
        if (row == 0||row == count-1)
        {
            for (int i = 0; i < count; i++)
            {
            cout<<"* ";
            }
            
        }
        else{
            cout<<"* ";
            for (int col = 0; col < count-1; col++)
            {
                cout<<"  ";
            }
            
        }
                    cout<<"* ";

        cout<<endl;
        
    }

// print full pyramid
for (int i = 0; i < 6; i++)
{
    for (int s = 0; s < 6-i; s++)
    {
        cout<<" ";
    }
    
    for (int j = 0; j < i; j++)
    {

        cout<<"* ";
        
    }
    cout<<endl;
    
}

// hollow piramid with numbers 
for (int i = 0; i < 6; i++)
{
      for (int s = 0; s < 6-i; s++)
    {
        cout<<" ";
    }
    if (i==3||i==4)
    {
 for (int st = 0; st < 1; st++)
    {
        cout<<st+1<<" ";
    }        for (int x = 0; x < i-2; x++)
        {
        cout<<"  ";
        }
 for (int st = 0; st < 1; st++)
    {
        cout<<i<<" ";
    }    }
    else{
    for (int st = 0; st < i; st++)
    {
        cout<<st+1<<" ";
    }
    }
    cout<<endl;
    
}


// inverted inverted piramid
for (int row = 0; row < count; row++)
{
    for (int s = 0; s < row; s++)
    {
        cout<<" ";
    }
    
    for (int col = 0; col < count-row; col++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
}

// pyramid with numbers 
int x = 5;
for (int i = 0; i < x; i++)
{
    for (int s = 0; s < x - i; s++)
    {
        cout<<" ";
    }
    
  for (int j = 0; j < i; j++)
  {
        cout<<i+j;
  }
  for (int si = 0; si < i-1; si++)
  {
    cout<<2*i-si-2;
  }
  
  cout<<endl;
    
}

// hollow diamond
int n = 4;
for (int row = 0; row < n; row++)
{
    for (int col = 0; col < n-row; col++)
    {
        cout<<" ";
    }
    for (int col = 0; col < 2*row+1; col++)
    {
        if (col==2*row||col==0)
        {
        cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    
    cout<<endl;
}
for (int row = 0; row < n; row++)
{
    for (int col = 0; col < row+1; col++)
    {
        cout<<" ";
    }
    for (int col = 0; col <2*n - 2*row-1; col++)
    {
        if (col==2*n - 2*row-2||col==0)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }

        
    }
    cout<<endl;
    
    
}
// hollow diamond type spaced inside rectangle

for (int row = 0; row < x; row++)
{
    for (int col = 0; col <x- row; col++)
    {
        cout<<"*";
    }
    
    for (int col = 0; col < 2*row+1; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col < x-row; col++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for (int row = 0; row < x; row++)
{
    for (int col = 0; col < row+1; col++)
    {
        cout<<"*";
    }
    for (int col = 0; col < 2*x-2*row-1; col++)
    {
        cout<<" ";
    }
    for (int col = 0; col < row+1; col++)
    {
        cout<<"*";
    }
    cout<<endl;
}

// series
for (int row = 0; row < x; row++)
{
   for (int col = 0; col < row; col++)
   {
    if (col==row-1)
    {
        cout<<row;
    }
    else{
    cout<<row<<"*";
    }
   }
  
   cout<<endl;
   
}
for (int row = 1; row < x; row++)
{
   for (int col = 0; col <x - row; col++)
   {
    if (col==x-row-1)
    {
    cout<<x-row;
    }
    else{
            cout<<x-row<<"*";

    }
   }
   cout<<endl;
   
}
// letter print
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
for (int row = 0; row < x; row++)
{
    for (int col = 0; col < row+1; col++)
    {
        int ans = col +1;
        char ch  = ans + 'A'-1;
        cout<<ch;
    }
    for (int col = 0; col < row; col++)
    {
        int ans = row-col;
        char ch = ans +'A'-1;
        cout<<ch;
    }
    
    cout<<endl;
    
}
// again hollow pyramid with number
int num = 5;
for (int row = 0; row < num; row++)
{
    for (int col = 0; col < num-row; col++)
    {
        cout<<" ";
    }
    if (row==num-1)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<col+1<<" ";
        }
        
    }
    else{
    
   for (int col = 0; col < row+1; col++)
   {
    if (col==0||col==row)
    {
        cout<<col+1<<" ";
    }
    else{
        cout<<"  ";
    }
    
        
   }
    }
   
 
    cout<<endl;
    
}


    return 0 ;
    
 }
