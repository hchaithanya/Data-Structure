#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};
//node *temp;
node *head = 0;
void insertat(int value)
{
node *temp=new node();//allocating memeory to temp
temp->data=value;
temp->next=head;
head=temp;
}
void Delete(int n)
{
node *temp;//creating a local copy of temp
temp=head;
node *t1=new node();
    if(n==1)
        {
        head=head->next;
        }
    else
    {
    int i=1;
        while(i<n-1)
            {
            temp=temp->next;
            i++;
            }
            t1=temp->next;
            temp->next=t1->next;
    }
    cout<<"Element deleted is"<<temp->data<<endl;

}

void display()
{
 node* temp;
// cout<<"Empty lists"<<head->data;
 if(head==0)
    {
    cout<<"Empty lists";
    }
    else{
    temp=head;

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
            insertat(dat);
            display();
            break;
    case 2: cout<<"Enter the node to be deleted:";
            cin>>nodenum;
            Delete(nodenum);
            display();
            break;
    }
    cout<<"Do you want to continue?y/n";
    cin>>ch;

}while(ch=='y');
}
