#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}


void deleteTree(struct node* node)
{
    if (node == NULL) return;
    deleteTree(node->left);
    deleteTree(node->right);
    cout<<"\n Deleting node: "<<node->data;
    free(node);
}

int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left   = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(8);

    deleteTree(root);
    root = NULL;

    cout<<"\n Tree deleted ";
    return 0;
}
