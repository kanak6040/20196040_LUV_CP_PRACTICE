#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node * head;
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

void Print()
{
    struct Node * temp= head;
    while (temp!=NULL)
    {
        cout<< temp->data<<"->";
        temp= temp->next;
    }
    if(temp==NULL);{
        cout<< "NULL";
    }
    cout<<"\n";
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
    Insert(5,1);
    Insert(6,2);
    Print();

}

