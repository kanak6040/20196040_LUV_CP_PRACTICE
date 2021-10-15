#include <bits/stdc++.h>
using namespace std;

struct BstNode{
   int data;
   BstNode *left;
   BstNode *right;
};

BstNode *GetNewNode(int data){
   BstNode *newNode = new BstNode();
   newNode->data = data;
   newNode->left = newNode->right = NULL;
   return newNode; //address of newNode  
}

BstNode* Insert(BstNode *root, int data)
{
   if(root==NULL)
   {
      root= GetNewNode(data);
   }
   else if(data<= root->data)
   {
      root->left = Insert(root->left, data);
   }
   else
   {
      root->right = Insert(root->right, data);
   }
   return root;
}

bool Search( BstNode *root, int data)
{
   if(root== NULL) return false;
   if(root->data == data) return true;
   else if(data< root->data) return Search(root->left, data);
   else return Search(root->right, data);
}

int Print(BstNode *root)
{
   BstNode *temp = root;
   if(root==NULL)
   {
      cout<<"Empty Tree";
      return 0;
   }
   while(temp->left!= NULL)
   {
      return Print(temp->left);
      cout<< temp->data<<" ";
   }
   while(temp->right!=NULL)
   {
      return Print(temp->right);
      cout<< temp->data<<" ";
   }
}

int FindHeight(BstNode *root)
{
   if(root==NULL) return -1;
   return max(FindHeight(root->left), FindHeight(root->right))+1;
}

int FindMin(BstNode *root)
{
   if(root==NULL){
      cout<<"Tree Empty";
      return -1;
   }
   BstNode *current = root;
   while(current->left!=NULL)
   {
      current = current->left;
   }
   return current->data;
}

void LevelOrder(BstNode *root)
{
   if(root==NULL) return;
   queue<BstNode *> Q;
   Q.push(root);
   while(!Q.empty())
   {
      BstNode *current = Q.front();
      cout<<current->data<<" ";
      if(current->left != NULL) Q.push(current->left);
      if(current->right != NULL) Q.push(current->right);
      Q.pop();
   }
}
void Preorder(BstNode *root)
{
   if(root==NULL) return;
   cout<<root->data;
   Preorder(root->left);
   Preorder(root->right);
}
void Inorder(BstNode *root)
{
   if(root==NULL) return;
   Inorder(root->left);
   cout<<root->data;
   Inorder(root->right);
}

void Postorder(BstNode *root)
{
   if(root==NULL) return;
   Postorder(root->left);
   Postorder(root->right);
   cout<<root->data;
}
bool issubtreelesser(BstNode * root, int value)
{
   if(root==NULL) return true;
   if(root->data <= value 
   && issubtreelesser(root->left, value)
   && issubtreelesser(root->right, value))
      return true;
   else
      return false;
}
bool issubtreegreater(BstNode * root, int value)
{
   if(root==NULL) return true;
   if(root->data > value 
   && issubtreegreater(root->left, value)
   && issubtreegreater(root->right, value))
      return true;
   else
      return false;
}

bool isBst(BstNode *root)
{
   if(issubtreelesser(root->left, root->data)
   && issubtreegreater(root->right, root->data)
   && isBst(root->left)
   && isBst(root->right))
   return true;
   else return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    BstNode *root= NULL;
    for(int i=2; i<10; i++)
    {
       Insert(root, i*i);
    }
    Insert(root, 9);
    Print(root);

}