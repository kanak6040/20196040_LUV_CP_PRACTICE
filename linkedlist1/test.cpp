#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *link;
};
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Node *A;  //head
    A=NULL;
    Node *temp = new Node();
    temp->data= 2;
    temp->link= NULL;
    A=temp;

    temp= new Node();
    temp->data=4;
    temp->link=NULL;
    
    Node *temp1 = A;
    while(temp1->link!=NULL);{
        temp1= temp1->link;
    }
    temp1->link= temp;
    
    temp1= A;
    while(temp1->link!=NULL);{
        cout<< temp1->data;
        temp1= temp1->link;
    }



}

