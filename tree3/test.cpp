// C++ program to insert element in Binary Tree
#include <iostream>
#include <queue>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node *FindMin(Node *root){
	if(root== NULL) return NULL;
	while(root->left != NULL){
		root= root->left;
	}
	return root;
}

// Node *Getsuccessor(Node *root, int data) {
// 	//Search the Node o(n)
// 	Node *current = FindMin(root, data);

// 	if(current == NULL) return NULL;

// 	if(current->right!= NULL) return FindMin(current->right);

// 	else{
// 		Node *successor = NULL;
// 		Node *ancestor = root;
// 		while(ancestor != current){
// 			if(current->data< ancestor->data){
// 			    successor = ancestor;
// 			    ancestor = ancestor->left;
// 			}
// 			else
// 			    ancestor = ancestor->right;
// 		}
// 		return successor;

// 	}

// }

int main()
{

	return 0;
}
