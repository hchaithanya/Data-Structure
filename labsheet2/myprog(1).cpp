#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
class stacki
{
  int top=-1;
  int n;
  char a[30];
  char ele;
public:
  void push(int,char);
  void pop();
  void rev(int);
};
void stacki::push(int l,char ele)
{
  if (top>=l)
   {
    cout<<"stack full!\n";
  }

  a[top++]=ele;
}
void stacki::pop()
{
  if(top==-1)
    {
      cout<<"stack empty!"<<endl;
    }
    cout<<a[top];
    top--;
}
void stacki::rev(int l)
{

  for(int i=l;i>0;i--)
    {

      pop();
    }
}
int main()
{
  stacki s;
  int l;
  char c[30];
  cout<<"enter the string size\n";
  cin>>l;
  cout << "enter the string to reverse\n";
  for(int i=0;i<l;i++)
    {
      cin>>c[i];
      s.push(l,c[i]);

    }

  s.rev(l);

}
