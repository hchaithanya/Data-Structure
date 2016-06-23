#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left, *right;
};
node *newNode(int data)
{
    node *temp = new node;
    temp->data  = data;
    temp->left  = temp->right = NULL;
    return (temp);
}
int getCount(node *root, int low, int high)
{
    if (!root) return 0;
    if (root->data == high && root->data == low)
        return 1;
    if (root->data <= high && root->data >= low)
         return 1 + getCount(root->left, low, high) +
                    getCount(root->right, low, high);
    else if (root->data < low)
         return getCount(root->right, low, high);
    else return getCount(root->left, low, high);
}
int main()
{
    node *root        = newNode(10);
    root->left        = newNode(40);
    root->right       = newNode(53);
    root->left->left  = newNode(1);
    root->right->left = newNode(43);
    root->right->right = newNode(70);
    int l = 4;
    int h = 65;
    cout << "Count of nodes between [" << l << ", " << h
         << "] is " << getCount(root, l, h);
    return 0;
}

