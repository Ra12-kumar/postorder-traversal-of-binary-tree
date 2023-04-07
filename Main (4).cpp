//  inorder binary tree traversal
#include<iostream>
using namespace std;
struct node{
  int data;
  struct node* left;
  struct node* right;
  node(int x){
    data=x;
    left=NULL;
    right=NULL;
  }
};
void postorder(struct node* root){
  if(root==NULL){
    return;
  }
  else{
  postorder(root->left);
 postorder(root->right);
 cout<<root->data<<" ";
  }
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  postorder(root);
}
