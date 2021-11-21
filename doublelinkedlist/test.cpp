#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
struct Node *head;

/*struct Node *GetNewNode(int x)
{
    Node newNode;
    newNode.data= x;
    newNode.data = NULL;
    newNode.next = NULL;
    return &newNode;
};
*/

struct Node *GetNewNode(int x){
    Node *newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

//insertion at beginning
void insertathead(int x)
{
    Node *newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head= newNode;
}

void Print()
{
    Node *temp= head;
    while( temp != NULL ){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void reverseprint(){
    Node*temp= head;
    if(temp == NULL) return;
    while(temp->next != NULL){
        temp= temp->next;  //going to last node
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->prev;
    }
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    insertathead(3);
    insertathead(4);
    insertathead(7);
    insertathead(0);
    Print();
    reverseprint();
}

