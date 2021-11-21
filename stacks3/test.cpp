#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
struct Node * head;
stack < struct Node *>S;

void myreverse()
{
    if(head==NULL) return;

    Node *temp = head;
    
    while(temp!= NULL){
        S.push(temp);
        temp = temp->next;
    }
    
    temp = S.top();
    head = temp;
    S.pop();
    
    while(!S.empty()){
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

void Insert( int data, int n){
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for(int i =0; i< n-2; i++){
        temp2= temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

struct Node * Print(Node *head)
{
    Node *temp= head;
    while (temp!=NULL)
    {
        cout<< temp->data<<"->";
        temp= temp->next;
    }
    if(temp==NULL);{
        cout<< "NULL";
    }
    cout<<"\n";
    return head;
};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    head= NULL;
    Insert(2,1);
    Insert(5,2);
    Insert(55,1);
    Insert(67,2); 
    Insert(2,1);
    Insert(8,2);
    Insert(16,1);
    Insert(68,2);
    Print(head);
    myreverse();
    Print(head);
}
