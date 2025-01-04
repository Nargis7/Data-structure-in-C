// left->right->root
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// Function to perform inorder traversal
void postorderTraversal(struct node* root){
    // Empty tree
    if(root==NULL){
        return;
    }
    // recur on the left subtree
    postorderTraversal(root->left);

     // recur on the right subtree
    postorderTraversal(root->right);
    
    // visit the current node
    printf("%d\t",root->data);

   
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
    printf("post order Traversal:\n");
    postorderTraversal(root);
    printf("\t");
    return 0;
}