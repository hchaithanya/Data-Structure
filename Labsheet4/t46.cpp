#include<iostream>
using namespace std;
int isempty();
int enqueue(int);
void display();
int dequeue();
void reversecq();
const int siz=10;
int queues[siz],fronts=-1,rear=-1;
int main()
{
 int item,res,ch;
 do
 {
  cout<<"\n circular queue\n1.insert\n2.delete\n3.display\n4.reverse a circular queue\n 5.exit";
  cout<<"\n enter the operation";
  cin>>ch;
  switch(ch)
  {
   case 1:cout<<"\n to insert";
   cin>>item;
   res=enqueue(item);
   if(res==-1)
   cout<<"\n overflow";
   else
    {
     cout<<"\n now the queue is \n";
     display();
    }
    break;
    case 2: item=dequeue();
    if(item==-1)
    cout<<"\nunderflow";
    else
    {
     cout<<"\n now the queue is \n";
     display();
    }
    break;
    case 3:
    display();
    break;
    case 4:reversecq();
    cout<<"\n now queue is ";
    display();
    break;
    case 5:break;
  }
 } while(ch!=5);
 return 0;
}
int enqueue(int x)
{
 if((rear+1)%siz==fronts)
 return -1;
 else if(isempty()==1)
 {
  fronts=rear=0;
  queues[rear]=x;
 }
 else
 {
  rear=(rear+1)%siz;
  queues[rear]=x;
 }
}
int dequeue()
{
 if(isempty()==1)
 {
  return -1;
 }
 else if(rear==fronts)
 {
  fronts=rear=-1;
 }
 else
 {
  fronts=(fronts+1%siz);
 }
}
int isempty()
{
if(rear==-1&&fronts==-1)
return 1;
else return 0;
}
void display()
{
 int i=0;
 cout<<"\n circular queue is :\nfront end is shown as >>>,rear as <<< and free space as -\n";
 if(fronts==-1)
 cout<<"\n empty queue";
 if(rear>=fronts)
 {
  for(i=0;i<fronts;i++)
  cout<<"-";
  cout<<">>>";
  for(i=fronts;i<rear;i++)
  cout<<queues[i]<<"<--";
  cout<<queues[rear]<<"<<<"<<"\n";
 }
 else
 {
  for(i=0;i<rear;i++)
  cout<<queues[i]<<"<--";
  cout<<queues[rear]<<"<<<";
  for(;i<fronts;i++)
  cout<<"-";
  cout<<">>>";
  for(i=fronts;i<siz;i++)
  cout<<queues[i]<<"<--";
 }
}
 void reversecq() {
            int temp,r,f;
            r=rear;
            f=fronts;
            for(int i=0 ; i<=rear/2 ; i++) {
                temp=queues[f];
                queues[f]=queues[r];
                queues[r]=temp;
                r--;
                f++;
            }
        }
