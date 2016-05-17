#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *ehead;
node *ohead;
void edisplay()
{
node *even;
if(ehead==0)
    {
    cout<<"List is empty";
    }
else
{
even=ehead;
while(even)
    {
    cout<<"Data is: "<<even->data<<endl;
    even=even->next;
    }
}
}
void inserteven(int value)
{
node *even=new node();
even->data=value;
even->next=ehead;
ehead=even;

}
void odisplay()
{

node *odd;
if(ohead==0)
    {
    cout<<"List is empty";
    }
else
{
odd=ohead;
while(odd)
    {
    cout<<"Data is: "<<odd->data<<endl;
    odd=odd->next;
    }
}
}
void insertodd(int value)
{

node *odd=new node();
odd->data=value;
odd->next=ehead;
ohead=odd;


}

void insertat(int n)
{
    int val;
    cout<<"Enter the data to enter in queue:";
    int i;
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
        {
        cin>>val;
        inserteven(val);

        }
        else
        {
        cin>>val;
        insertodd(val);
        }
        }
        cout<<"Odd lists: ";
        odisplay();
           cout<<"Even lists: ";
           edisplay();
}
int main()
{
//char ch;
int n;

    cout<<"Enter the limit";
    cin>>n;
    insertat(n);
//cout<<"Do you want to continue?y/n";
//cin>>ch;

//while(ch!='n');
return 0;
}
