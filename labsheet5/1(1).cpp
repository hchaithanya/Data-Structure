#include<iostream>
using namespace std;
int rear,fron,n=5,a[5];
class que
{
public:
que()
{
rear=fron=-1;
}

int eqr(int x)
    {
    if((rear+1)%n==fron)
    cout<<"queue is full\n";
    else if (rear==-1&&fron==-1)
    isempty(x);
    else
    {
    rear=(rear+1)%n;
    a[rear]=x;
    }
    }
int isempty(int y)
{
fron=rear=0;
a[rear]=y;
}

    int dqf()
    {
    if(fron==-1&&rear==-1)
    cout<<"queue is empty";
    else if(rear==fron)
    {
    rear=fron=-1;
    }
    else
    {
    fron=(fron+1)%n;
    }
    }
void display()
{
int i;
if(rear==fron||fron<rear)
{
for(i=fron;i<=rear;i++)
        {
        cout<<endl<<a[i];
        }
}
if(rear<fron)
    {
    for(i=fron;i<n;i++)
    cout<<endl<<a[i];
    for(i=0;i<=rear;i++)
    cout<<endl<<a[i];
    }
}

int eqf(int x)
    {
     if((rear+1)%n==fron)
    cout<<"queue is full\n";
    else if (rear==-1&&fron==-1)
    isempty(x);
    else
    {
    fron=(fron+n-1)%n;
    a[fron]=x;
    }
    }

int dqr()
        {
        if(fron==-1&&rear==-1)
        cout<<"queue is empty";
        else if(rear==fron)
        {
        rear=fron=-1;
        }
        else
        {
        rear=(rear+n-1)%n;
        }
        }
};

int main()
{
int r=0,d,data;
que q;
do
{
cout<<"\nENTER CHOICE\n";
cout<<"1  ENQUEUE AT REAR \n2  ENQUEUE AT FRONT \n3  DEQUEUE AT FRONT \n";
cout<<"4 DEQUEUE AT REAR\n5 DISPLAY\n6  EXIT\n\n";
cin>>d;
cout<<endl<<endl;
switch (d)
    {
    case 1:cout<<"enter your data\n";
            cin>>data;
            q.eqr(data);
     break;
     case 2:cout<<"enter your data\n";
            cin>>data;
            q.eqf(data);
     break;
     case 3:q.dqf();
     break;
     case 4: q.dqr();
     break;
     case 5:q.display();
     break;
     case 6:r=r+1;
     break;
     default: cout<<"wrong entry\n";
    }


}
while(r==0);
return 0;
}


