#include <bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node *next;
};
Node *front = NULL;
Node * rear = NULL;
void enqueue(int x)
{
   Node *temp = new Node();
   temp->data= x;
   temp->next= NULL;
   if(front == NULL && rear == NULL) //no element
   {
      front= rear= temp;
      return;
   }
   rear->next = temp;
   rear = temp;
}
void dequeue(){
   Node *temp = front;
   if(front==NULL)    //no element present
      return;
   else if(front== rear)  //only one element
      front = rear = NULL;
   else                 //many element present
      front = front->next;
   free(temp);
}
void Print()
{
   Node *temp = front;
   while(temp->next!=NULL)
   {
      cout<<temp->data<<"->";
      temp = temp->next;
   }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    for(int i=0; i<9; i++)
    {
       enqueue(rand());
       Print();
       cout<<endl;
    }
    dequeue();
    Print();
       cout<<endl;
       dequeue();
    Print();
       cout<<endl;
       dequeue();
    Print();
       cout<<endl;
       dequeue();
    Print();
       cout<<endl;
}