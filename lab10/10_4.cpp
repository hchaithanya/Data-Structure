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
    int del_max()
    {
        int temp;
        temp=A[0];
        A[0]=A[s-1];
        s--;
        max_heap();
        return temp;
    }
    int del_min()
    {
        int temp;
        temp=A[0];
        A[0]=A[s-1];
        s--;
        min_heap();
        return temp;
    }
    void max_sort()
    {
        int c=s;
        int MA[s];
        for(int i=0;i<c;i++)
        {
            MA[i]=del_max();
        }
        cout<<"Max. Sorted (Descending order) : ";
        for(int j=0;j<c;j++)
        {
            cout<<MA[j]<<"\t";
        }
        cout<<endl;
    }
    void min_sort()
    {
        int c=s;
        int MinA[s];
        for(int i=0;i<c;i++)
        {
            MinA[i]=del_min();
        }
        cout<<"Min. Sorted (Ascending order) : ";
        for(int j=0;j<c;j++)
        {
            cout<<MinA[j]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    int cnt1;
    cout<<"Enter the size of the array : ";
    cin>>cnt1;
    heap h1(cnt1);
    h1.insert_array();
    cout<<"\nMax. Heap : \n";
    h1.max_heap();
    h1.print();
    cout<<"\nMin. Heap : \n";
    h1.min_heap();
    h1.print();
    int d;
    cout<<"\n\nChoose from the following options :\n1.Ascending Order\n2.Descending Order\n";
    cin>>d;
    switch(d)
    {
    case 1:
        h1.min_heap();
        h1.min_sort();
        break;
    case 2:
        h1.max_heap();
        h1.max_sort();
        break;
    default:
        cout<<"Operation terminated.<proper option not selected>"<<endl;
    }
}
