#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node*LCA(node*root , int n1, int n2){
	
	if(root == NULL){
		return NULL;
	}

	if(root->data == n1 || root->data == n2){
		return root;
	}

	node*left = LCA(root->left,n1,n2);
	node*right = LCA(root->right,n1,n2);

	if(left != NULL and right != NULL){
		return root;
	}
	if(left == NULL and right == NULL){
		return NULL;
	}
	if(left != NULL){
		return LCA(root->left ,n1,n2);
	}
	
		
	return LCA(root->right,n1,n2);

}

int FindDistance(node*root,int k,int dist){
	
	if(root == NULL){
		return -1;
	}

	if(root->data == k){
		return dist;
	}

	int left = FindDistance(root->left,k,dist+1);

	if(left == -1){
		return FindDistance(root->right,k,dist+1);
	}
	return left;

}

int DistaceBetweemNodes(node*root,int n1,int n2){
	node*lca = LCA(root,n1,n2);

	int d1 = FindDistance(lca,n1,0);
	int d2 = FindDistance(lca,n2,0);

	return d1+d2;
}

int main(){

	node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);

	int n1 = 8;
	int n2 = 5;

	cout<<DistaceBetweemNodes(root,n1,n2);
	return 0;
}