#include<iostream>
using namespace std;
struct tree_node
{
tree_node *left;
tree_node *right;
int data;
};
class bst
{
public:
tree_node *root;
bst()
{
root=NULL;
}

int isempty()
{
return (root==NULL);
}

void insert(int item)
{
tree_node *p= new tree_node;
tree_node *parent;
p->data=item;
p->left=NULL;
p->right=NULL;
parent=NULL;
if(isempty())
root=p;
else
{
tree_node *ptr;
ptr=root;
while(ptr!=NULL)
{
parent=ptr;
if(item > ptr->data)
ptr=ptr->right;
else
ptr=ptr->left;
}
if(item < parent->data)
parent->left=p;
else
parent->right=p;
}
}
tree_node parent(int item)
{
tree_node *ptr;
tree_node *parent=new tree_node;
ptr=root;
while(ptr!=NULL)
{
parent=ptr;
if(item > ptr->data)
ptr=ptr->right;
else
ptr=ptr->left;
}
return *parent;
}


int height(tree_node *val)
{
int Left_height,Right_height;
tree_node *ptr=val;
if(ptr==NULL)
return -1;
else
{
int Left_height = height(ptr->left);
int Right_height = height(ptr->right);
return max(Left_height, Right_height)+1;
}
}

int elementsearch(tree_node *p,int val)
{
if(p->data==NULL)
return 0;
if(p->data==val)
return 1;
if(val < p->data)
return elementsearch(p->left,val);
else
return elementsearch(p->right,val);
};

void minimum()
{
tree_node *ptr=root;
while(ptr->left!=NULL)
ptr=ptr->left;
cout<<ptr->data<<" is the least value of bst"<<endl;
}

void maximum()
{
tree_node *ptr=root;
while(ptr->right!=NULL)
ptr=ptr->right;
cout<<ptr->data<<" is the greatest value of bst"<<endl;
}
/*void successor(int val)
{
tree_node *ptr=root;
tree_node *y=new tree_node;
tree_node *x=new tree_node;
while(ptr!=NULL)
{
if(val<ptr->data)
ptr=ptr->left;
if(val>ptr->data)
ptr=ptr->right;
if(ptr->data==val)
tree_node *x=ptr;
}
if(x->right!=NULL)
return minimum(x->right);
else
{
y=parent(x->data);
while(y!=NULL && x==y->right)
{
x=y;
y=parent(y->data);
}
}
return y;
}



//void predecessor();*/
};


int main()
{
bst b;
b.insert(52);
b.insert(25);
b.insert(50);
b.insert(15);
b.insert(40);
b.insert(45);
b.insert(20);
int n,x,z;
cout<<"operations in BST"<<endl;
cout<<"1.Height of BST\n2.Search an element in BST\n3.Minimum of BST\n4.Maximum of BST\n5.Successor of a node in BST\n6.Predecessor of a node in BST"<<endl;
cin>>n;
switch(n)
{
case 1:z=b.height(b.root);
       cout<<"height of bst is :"<<z;
       break;
case 2:cout<<"enter the element to search :";
       cin>>x;
       if(b.elementsearch(b.root,x))
       cout<<"Yes element is present inside the tree."<<endl;
       else
       cout<<"Element is not found inside the tree"<<endl;
       break;
case 3:b.minimum();
       break;
case 4:b.maximum();
       break;
/*case 5:b.successor();
       break;
/*case 6:b.predecessor();
       break;*/
}
}
