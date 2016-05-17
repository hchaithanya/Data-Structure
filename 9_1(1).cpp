#include<iostream>
using namespace std;
struct tree_node
{
tree_node *left;
tree_node *right;
int data;
};
class tree
{
tree_node *root;
public:
    tree()
    {
        root=NULL;
    }
    int IsEmpty()
    {
        if(root==NULL)
          return 1;
          else
            return 0;
    }
    void insert(int item)
        {
            tree_node *p=new tree_node;
            p->data=item;
            p->left=NULL;
            p->right=NULL;
            if(IsEmpty())
            {
                root=p;
            }
            else
            {
                tree_node *ptr;
                tree_node *parent;
                ptr=root;
                while(ptr!=NULL)
                    {
                        parent=ptr;
                        if(item>ptr->data)
                        ptr=ptr->right;
                        else
                        ptr=ptr->left;
                    }
                    if(item<parent->data)
                    parent->left=p;
                    else
                    parent->right=p;

            }
        }
    void inordertrav()
    {
        inorder(root);
    }
    void inorder(tree_node *ptr)
    {
        if(ptr!=NULL)
            {
                inorder(ptr->left);
                cout<<"  "<<"  "<<ptr->data;
                inorder(ptr->right);
            }

    }
    void preordertrav()
    {
        postorder(root);
    }
    void preorder(tree_node *ptr)
    {
            if(ptr!=NULL)
                {
                    cout<<ptr->data<<"  ";
                    preorder(ptr->left);
                    cout<<"  ";
                    preorder(ptr->right);
                }
    }
    void postordertrav()
    {
        postorder(root);
    }
    void postorder(tree_node *ptr)
    {
        if(ptr!=NULL)
        {
        postorder(ptr->left);
        cout<<"  ";
        postorder(ptr->right);
        cout<<"  "<<ptr->data;
        }
    }
};
int main()
{
tree t;
t.insert(10);
t.insert(11);
t.insert(12);
t.insert(13);
t.insert(14);
t.insert(15);
cout<<endl<<"Inorder"<<endl;
t.inordertrav();
cout<<endl<<"Postorder"<<endl;
t.postordertrav();
cout<<endl<<"Preorder"<<endl;
t.preordertrav();
}
