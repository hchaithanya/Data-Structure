#include<iostream>
using namespace std;
class twostack
{
public:
int a[50], b[50], i, n=50, j, top, top1, item, item1;
twostack()
{
top=0;
top1= 0;
}
int push(int x)
{
if(top >= n)
{
cout<<"STACK OVERFLOW!\n";
}
else
{
a[top]= x;
top++;
}
}
int push1(int y)
{
if(top1 >= n)
{
cout<<"STACK OVERFLOW\n";
}
else
{
b[top1]= y;
top1++;
}
}
void pop()
{
if(top < 0)
{
cout<<"STACK UNDERFLOW\n";
}
else
{
item = a[top];
push1(item);
top--;
}
}
void pop1()
{
if(top1 < 0)
{
cout<<"STACK UNDERFLOW\n";
}
else
{
item1 = b[top1];
top1--;
}
}
void display()
{
for(i=top1;i>0;i--)
{
cout<<b[i]<<"\t";
}
}
};
int main()
{
twostack t;
int i,n,j,k,p,q,r;
cout<<"enter no.of elements into 1st stack\n";
cin>>n;
for(i=0; i<n;i++)
{
cin>>p;
t.push(p);
}
for(j=0;j<n;j++)
{
t.pop();
}
cout<<"enter the no.of times the elements tobe poped from 2nd stack";
cin>>r;
for(k=0;k<r;k++)
{
t.pop1();
}
t.display();
}
