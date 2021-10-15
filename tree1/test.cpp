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

bool isBstUtil(BstNode *root, int minValue, int maxValue)
{
   if(root->data > minValue
   && root->data < maxValue
   && isBstUtil(root->left, minValue, root->data)
   && isBstUtil(root->right, root->data, maxValue))
   { cout<<root->data<<" ";
   return true; 
   }
   else return false;

}
bool isBst(BstNode *root)
{
   return isBstUtil(root, INT_MIN, INT_MAX);
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

}