#include<iostream>
#include<stdlib.h>
using namespace std;
class stackin
{
 int a[10];
 int top=-1;
 int n;
 int ele;
 public:
 void push()
{


    if(top>=10)
        cout<<"stack full";
    else
    {
        cout<<"enter the element";
        //for(int i=0; i<n; i++)
            cin>>ele;
            top++;
            a[top]=ele;


    }

}

    void pop()
        {
       // int a[10];
        if(top==-1)
            cout<<"stack is empty";
        else
        {   cout<<"deleted ele is:"<<a[top];
            //for(int i=0;i<top;i++)
           // cout<<a[i];
            top--;
        }
        }
    void display()
        {
        //cout<<"Enter the elements into the stack"
        cout<<"The stack is:\n";
        for( int i=top;i>=0;i--)
            {

            cout<<a[i];
            }
        }
    void isempty()
        {
        if(top==-1)
        cout<<"stack is empty\n";
        }
    void mini()
        {
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(a[i]<a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
        cout<<"The minimum element is "<<a[0]<<endl;
}
          /*  if(a[top]<temp)
                {
                temp=a[top];
                top--;
                }

            cout<<"The minimum element is: "<<temp;
        }*/
        };
    int main()
    {
        stackin s;
        int n;
        //int ele;
        char ch;
       // int top=-1;
        //cout<<"enter the number of elements:";
       // cin>>n;
       do{
        cout<<"\nENter choice\n";
        cout<<"1.push\n2.pop\n 3.IsEmpty\n 4.min\n 5.for Exit\n";
        cin>>ch;
        switch(ch)
        {
        case '1':s.push();

                s.display();
                break;
        case '2':s.pop();
                s.display();
                break;
        case '3':s.isempty();
                break;
        case'4':s.mini();
                break;
        case '5':exit(0);
       }
        }
        while(ch!=0);
}



