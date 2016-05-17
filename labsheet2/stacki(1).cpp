#include<iostream>
#include<stdlib.h>

using namespace std;

class twoStacks
{
    int *a;
    int size;
    int top1, top2;
public:
   twoStacks(int n)
   {
       size = n;
       a = new int[n];
       top1 = -1;
       top2 = size;
   }


   void push1(int x)
   {

       if (top1 < top2 - 1)
       {
           top1++;
           a[top1] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }

   void push2(int x)
   {

       if (top1 < top2 - 1)
       {
           top2--;
           a[top2] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }

   int pop1()
   {
       if (top1 >= 0 )
       {
          int x = a[top1];
          top1--;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }

   int pop2()
   {
       if (top2 < size)
       {
          int x = a[top2];
          top2++;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }
};



int main()
{
    twoStacks ts(5);
    ts.push1(1);
    ts.push2(2);
    ts.push2(5);
    ts.push1(11);
    ts.push2(13);
    cout << "Popped element from stack1 is " << ts.pop1();
    ts.push2(20);
    cout << "\nPopped element from stack2 is " << ts.pop2();
    return 0;
}
