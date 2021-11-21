#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *link;
};
struct Node * top= NULL;

//similar to insertion at beginning
void Push(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->link = top; 
    top = temp;
}
void Pop(){
    Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}

void Print()
{
    Node * temp;
    temp = top;
    while(top!=NULL)
    {
        cout<<top->data<<"->";
        top= top->link;
    }

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
