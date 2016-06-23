#include<iostream>
using namespace std;

class heap
{
public:
    int A[100];
    int s;
    heap()
    {
        s=0;
    }
    heap(int x)
    {
        s=x;
    }
    void insert_array()
    {
        cout<<"Enter the array : "<<endl;
        for(int i=0;i<s;i++)
        {
            cin>>A[i];
        }
    }
    void max_heap()
    {
        for(int j=((s/2)-1);j>=0;j--)
        {
            max_heapify(j);
        }
    }
    void max_heapify(int y)
    {
        int largest=y;
        int l=2*y+1;
        int m=2*y+2;
        if((l<s)&&A[l]>A[largest])
        {
            largest = l;
        }
        if((m<s)&&A[m]>A[largest])
        {
            largest = m;
        }
        if(y!=largest)
        {
            int temp=A[y];
            A[y]=A[largest];
            A[largest]=temp;
            max_heapify(largest);
        }
    }
    void print()
    {
        for(int z=0;z<s;z++)
        {
            cout<<A[z]<<"\t";
        }
    }
    void comp()
    {
        for(int i1=0;i1<s;i1++)
        {
            A[i1]=-A[i1];
        }
    }
    void min_heap()
    {
        comp();
        max_heap();
        comp();
    }
};
int main()
{
    int cnt1,cnt2;
    cout<<"Enter the size of the array <for max-heap> : ";
    cin>>cnt1;
    heap h1(cnt1);
    h1.insert_array();
    h1.max_heap();
    h1.print();
    cout<<"\nEnter the size of th array <for min-heap> : ";
    cin>>cnt2;
    heap h2(cnt2);
    h2.insert_array();
    h2.min_heap();
    h2.print();
}
