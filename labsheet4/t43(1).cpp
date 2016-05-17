#include<iostream>
using namespace std;
int arr[50],fron=0,rare=0,one[25],two[25];

class que
{
public:
int i,j,n=0,s=0;
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



void display()
{
    split();
    if(fron>=rare)
    {
    cout<<"queue is empty\n";
    }

}
int split()
{
for(i=fron,j=0;i<rare;i=i+2,j++)
    {
    one[j]=arr[i];
    n++;
    }
for(i=fron+1,j=0;i<rare;i=i+2,j++)
    {
    two[j]=arr[i];
    s++;
    }
    cout<<"\nsplited array is\n";
for(i=0;i<n;i++)
    {
    cout<<endl<<one[i];
    }
    cout<<endl;
cout<<"second aaray is\n";
for(i=0;i<s;i++)
    {
    cout<<endl<<two[i];
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
cout<<"\nenter ......"<<endl<<"1 to enqueue"<<endl;
cout<<"2 to display"<<endl<<"3 to stop the program"<<endl<<endl;
cout<<"\t\t";
cin>>s;
switch (s)
    {
    case 1: cout<<"\nenter your input\n";
            cin>>x;
            a.enque(x);
            break;
    case 2:a.display();
            break;
    case 3:d=d+2;
            break;

    default:cout<<"invalid entry\n";
    }


}
while (d==0);

return 0;
}
