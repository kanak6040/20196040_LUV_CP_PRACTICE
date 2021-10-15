#include <bits/stdc++.h>
using namespace std;


#define MAX_SIZE 101
int A[MAX_SIZE];
int front= -1;
int rear= -1;

int isempty(){
   if(front==-1 && rear==-1) return true;
   else return false;
}
int isfull(){
   if((rear+1) == front || rear==(MAX_SIZE-1))
   return true;
   else return false;
}
void enqueue(int x)
{
   if(isfull()){
      return;
   }
   if(isempty()){
      front=rear=0;
   }
   else{
      rear= rear+1;
   }
   A[rear]= x;
}
void dequeue()
{
   if(isempty()) return;
   else if(front== rear)
       front= rear= -1;
   else
       front= front+1;
}
void Print(){
   int temp = front;
   while(temp<=rear)
   {
      cout<<A[temp]<<"->";
      temp++;
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

}
