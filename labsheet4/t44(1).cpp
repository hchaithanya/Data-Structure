#include<iostream>
using namespace std;
int arr[50],fron=0,rare=0,one[25];

class que
{
public:
int i,j;
que()
{
fron=0;
rare=0;
}


int enque(int x)
{
    rare++;
    arr[rare-1]=x;
}

int dequeu()
{
    fron++;
}

void display()
{
    if(fron>=rare)
    {
    cout<<"QUEUE EMPTY\n";
    }
    for(i=fron;i<rare;i++)
    {
    cout<<endl<<arr[i];
    }
    cout<<endl;
}
int rever()
{
for(i=rare-1,j=fron;i>=fron;i--,j++)
{
   one[i]=arr[j];
}
cout<<"\nreversed queue is\n";
for(i=fron;i<rare;i++)
{
   cout<<one[i]<<endl;
}
cout<<endl;
}


};






int main()
{
que a;
int d=0,s,x;
do
{
cout<<"\nenter ......"<<endl<<"1 to enqueue"<<endl<<"2 to dequeue"<<endl;
cout<<"3 to display"<<endl<<"4 to reverse"<<endl<<"5 to stop the program"<<endl<<endl;
cout<<"\t\t";
cin>>s;
switch (s)
    {
    case 1: cout<<"\nenter your input\n";
            cin>>x;
            a.enque(x);
            break;
    case 2: a.dequeu();
            break;
    case 3:a.display();
            break;
    case 5:d=d+2;
            break;
    case 4:a.rever();
            break;
    default:cout<<"invalid entry\n";
    }


}
while (d==0);

return 0;
}
