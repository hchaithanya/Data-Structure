#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *top = 0;

void push(int value)
    {
    node *temp=new node();
    temp->data=value;
    temp->next=top;
    top=temp;
    }
    void pop()
    {
        node *temp;
        temp=top;
        if(top==0)
        {
        cout<<"Empty lists:\n";
        }
        else
        {
        top=top->next;
        }
    }
void display()
{
    node *temp;
    if(top==0)
        {
        cout<<"Empty lists\n";
        }
          else{
    temp=top;
     while(temp!=0)
        {
        cout<<"Data is:"<< temp->data<<endl;
        temp=temp->next;
        }
    }
}
int main()
{
int a,dat;
int nodenum;
char ch;
do{
cout<<"<----------MENU-------------->";
cout<<endl<<"1.Insert\n2.Delete\n";
cin>>a;
switch(a)
    {
    case 1: cout<<"Enter the value to be inserted\n:";
            cin>>dat;
            push(dat);
            display();
            break;
    case 2: pop();
            display();
            break;
    }
    cout<<"Do you want to continue?y/n";
    cin>>ch;

}while(ch=='y');
}
