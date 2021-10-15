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

BstNode* FindMin(BstNode *root)
{
   if(root==NULL){
      cout<<"Tree Empty";
      return NULL;
   }
   BstNode *current = root;
   while(current->left!=NULL)
   {
      current = current->left;
   }
   return current;
}

BstNode * Delete(BstNode * root, int data)
{
   if(root==NULL) return root;
   else if(data < root->data) root->left = Delete(root->left, data);
   else if(data > root->data) root->right = Delete(root->right, data);
   else{
      if(root->left == NULL && root->right == NULL){
         delete root;
         root = NULL;
      }
      else if(root->left == NULL)
      {
         BstNode *temp = root;
         root = root->right;
         delete temp;
      }
      else if(root->right == NULL){
         BstNode *temp= root;
         root= root->left;
         delete temp;
      }
      else
      {
         BstNode *temp = FindMin(root->right);
         root->data = temp->data;
         root->right = Delete(root->right, temp->data);
      }
   }
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

}