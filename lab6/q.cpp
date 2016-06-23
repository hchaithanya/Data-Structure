//Implementation of linked lists using Queue//
#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
node *Front=0;
node *rear=0;
void enqueue(int value)
{
//cout<<"inside enqueue";
node *temp=new node;
temp->data=value;
temp->next=NULL;
    if(Front==0&&rear==0)
        {
        Front=temp;
        rear=temp;
        }
    else
        {
        rear->next=temp;
        rear=temp;

        }
}
void display()
    {
    node *temp;
    temp=Front;
    //cout<<"inside display";
    if(Front==0)
        {
        cout<<"Queue is empty";
        }
    while(temp)
        {
        cout<<"The data is:"<<temp->data<<endl;
        temp=temp->next;
        }
    }
void dequeue()
    {
    node *temp;
    temp=Front;
    if(Front==0)
        {
        cout<<"List is empty";
        }
    else if(Front==rear)
        {
        Front=rear=0;
        }
    else
        Front=temp->next;
    }
int main()
{
char ch,choice;
int dat;
do{
    cout<<"-------------------MENU-------------------";
    cout<<"\n1.Enqueue\n2.Dequeue\n";
    cin>>choice;
    switch(choice)
    {
        case'1':cout<<"Enter the data to enter in queue:";
                cin>>dat;
                cout<<endl;
                enqueue(dat);
                display();
                break;
        case'2':dequeue();
                display();
                break;
    }
cout<<"Do you want to continue?y/n";
cin>>ch;
}while(ch!='n');
return 0;
}
