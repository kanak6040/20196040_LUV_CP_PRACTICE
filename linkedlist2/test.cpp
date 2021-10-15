#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *link;
};
struct Node * head;

//Insert at beginning
void Insert( int x)
{
    Node *temp = new Node();
    temp->data=x;
    temp->link= NULL;
    if(head!=NULL) temp->link= head;
    head = temp;
}

//Print in normal manner
void Print()
{
    struct Node * temp= head;
    while (temp!=NULL)
    {
        cout<< temp->data<<"->";
        temp= temp->link;
    }
    if(temp==NULL);{
        cout<< "NULL";
    }
    cout<<"\n";
}
struct Node *temp = head;
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    head= NULL;
    int n, i, x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        Insert(x);
    }
    //Print();
    Print();
}

