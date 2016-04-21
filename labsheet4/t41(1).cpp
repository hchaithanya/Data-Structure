#include<iostream>
using namespace std;
class que
{
public:
int i,a[50],f,r;
que()
{
f=0;
r=0;
}
int enque(int x)
{
a[r]=x;
r++;
}
int dequeu()
{
f++;
}
void display()
{
if((f<0) && (r<0))
{
cout<<"queue is empty\n";
}
for(i=f;i<r;i++)
{
cout<<"\t"<<a[i];
}
cout<<"\n";
}
};
int main()
{
que q;
int d=0,s,x;
do
{
cout<<"1  enqueue\n2  dequeue\n3  display\n4  QUIT\n\n";
cin>>s;
switch (s)
{
case 1: cout<<"\nENTER THE ITEM TO BE INSERTED : ";
        cin>>x;
        q.enque(x);
        break;
case 2: q.dequeu();
        break;
case 3: q.display();
        break;
case 4: d=1;
        break;
default:cout<<"invalid entry\n";
}
}
while (d==0);
return 0;
}

