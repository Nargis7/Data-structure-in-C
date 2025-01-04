// left->root->right
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// Function to perform inorder traversal
void inorderTraversal(struct node* root){
    // Empty tree
    if(root==NULL){
        return;
    }
    // recur on the left subtree
    inorderTraversal(root->left);
    // visit the current node
    printf("%d\t",root->data);

    // recur on the right subtree
    inorderTraversal(root->right);
}

    struct node*createnode(int data){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
int main(){
    struct node* root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    root->right->right=createnode(6);
// function call
    printf("In order Traversal:\n");
    inorderTraversal(root);
    printf("\t");
    return 0;
}