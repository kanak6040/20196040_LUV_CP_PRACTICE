#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top= -1;

void Push(int x)
{
    if(top == MAX_SIZE-1){
        cout<<"Stack Overflow";
        return;
    }
    A[++top] = x;
}
void Pop()
{
    if(top==-1){
        cout<<"Stack have no element";
        return;
    }
    top--;
}
void Print(){
    cout<< "Stack \n";
    for (int i=0; i<=top; i++)
        cout<<A[i]<<"->";
    cout<<"\n";
}



int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Push(2); 
    Push(3);
    Push(4);
    Push(7);
    Push(9);
    
    Print();
    Push(7);
    Push(9);
    Push(2); 
    Push(3);
    Push(4);
    Print();
}

