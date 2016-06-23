#include<iostream>
using namespace std;
class heap
{
int a[20],b[20];
int n;
public:
    heap()
    {
        cout<<"Enter the no of elements";
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
    }

        void buildheap()
            {
                for(int i=(i/2)-1;i>-1;i--)
                    maxheapify(i);
            }
            void maxheapify(int i)
            {
            int largest=i;
            int l=2*i+1;
            int m=2*i+2;
                if(l<n && a[l]>a[i])
                    largest=l;
                if(m<n&& a[m]>a[largest])
                    largest=m;
                if(i!=largest)
                    {

                    int t=a[i];
                    a[i]=a[largest];
                    a[largest]=t;
                    maxheapify(largest);

                    }
            }
            void getminmax()
            {
                int key,ele;
                cout<<"Enter the priority(Min,1/Max,0)?\n";
                cin>>key;
                cout<<"Enter the elment";
                cin>>ele;
                if(key==1)
                   {
                   a[n]=ele;
                   cout<<"/nPrioritized Max-heap:/n";
                     for(int i=0;i<n+1;i++)
                        cout<<a[i]<<endl;
                    }
                else
                {
                cout<<a[n-1]<<"        "<<a[n]<<endl<<endl;
                    for(int j=n,k=n-1;j>0;j--,k--)
                        {
                            a[j]=a[k];
                           // cout<<a[j]<<"    ";
                        }
                         a[0]=ele;
                        cout<<"/nPrioritized Max-heap:/n";
                        for(int i=0;i<n;i++)
                        cout<<a[i]<<endl;

                }

            }
             void  deletenode()
                {
                int key,ele;
                cout<<"Enter the priority(Min,1/Max,0)?\n";
                cin>>key;

                    if(key==1)
                    {
                    n--;
                        for(int i=0;i<n;i++)
                          cout<<a[i]<<endl;
                    }
                    else
                    {

                        for(int i=0;i<n;i++)
                          a[i]=a[i+1];
                          for(int i=0;i<n-1;i++)
                        cout<<a[i]<<endl;
                    }



                }
             void display()
                {
                    for(int i=0;i<n;i++)
                        cout<<a[i]<<endl;

                }

};
int main()
{
heap h;
int l;
h.buildheap();
h.display();
cout<<"Insert or del?(0/1)";
cin>>l;
if(l==0)
h.getminmax();
else
h.deletenode();
}
