#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node * head;
void Delete(int n)
{
    Node *temp1 = head;
    if(n==1){
        head= temp1->next;
        free(temp1);
        return;
    }
    for(int i=0; i<n-2; i++)
    {
        temp1= temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next= temp2->next;
    free(temp2);
}

void Insert( int data, int n)
{
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
    while (temp!=NULL){
        cout<< temp->data<<"->";
        temp= temp->next;
    }
    if(temp==NULL)
        cout<< "NULL";
    cout<<"\n";
    return head;
};

struct Node * reverse(Node *head)
{
    Node *current, *prev, *next;
    current= head;
    prev= NULL;
    while(current!= NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current= next;
    }
    head = prev; 
    return head;

};

void Printrecursive(Node * head)
{
    Node *temp= head;
    if(temp == NULL) return;
    cout<< temp->data<< "->";
    Printrecursive(temp->next);
}

void Printreverserecursive(Node * head)
{
    if(head == NULL) return;
    Printreverserecursive(head->next);
    cout<< head->data<< "->";  
}

void reverserecursion(Node *p)
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    reverserecursion(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}

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
    Delete(3);
    Print(head);
    head = reverse(head);
    Print(head);
    Printrecursive(head);
    
    Printreverserecursive(head);
    reverserecursion(head);
    Print(head);
}

