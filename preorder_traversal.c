// root->left->right
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// Function to perform inorder traversal
void preorderTraversal(struct node* root){
    // Empty tree
    if(root==NULL){
        return;
    }
     // visit the current node
    printf("%d\t",root->data);
    // recur on the left subtree
    preorderTraversal(root->left);
   

    // recur on the right subtree
    preorderTraversal(root->right);
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
    printf("pre order Traversal:\n");
    preorderTraversal(root);
    printf("\t");
    return 0;
}