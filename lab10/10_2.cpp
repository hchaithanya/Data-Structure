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
        cout<<endl;
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
    void increase(int pos,int val)
    {
        if(A[pos]<val)
        {
            A[pos]=val;
        }
        min_heap();
    }
    void decrease(int pos,int val)
    {
        if(A[pos]>val)
        {
            A[pos]=val;
        }
        min_heap();
    }
    void insert_element(int val)
    {
        s++;
        A[s-1]=val;
        min_heap();
    }
    void del_min()
    {
        A[0]=A[s-1];
        s--;
        min_heap();
    }
    void del_node(int pos)
    {
        A[pos] = -9999;
        min_heap();
        del_min();
    }
};
int main()
{
    int cnt;
    cout<<"Enter the size of th array <for min-heap> : ";
    cin>>cnt;
    heap h(cnt);
    h.insert_array();
    h.min_heap();
    h.print();
    cout<<"Enter the postion and new value to increment any element of the min_heap: ";
    int pos1,val1;
    cin>>pos1>>val1;
    h.increase(pos1,val1);
    h.print();
    cout<<"Enter the postion and new value to decrement any element of the min_heap: ";
    int pos2,val2;
    cin>>pos2>>val2;
    h.decrease(pos2,val2);
    h.print();
    cout<<"Enter the value of an element to insert into the heap : \n";
    int val3;
    cin>>val3;
    h.insert_element(val3);
    h.print();
    cout<<"Deleting the min. Element : \n";
    h.del_min();
    h.print();
    cout<<"Enter the position of the element to delete : \n";
    int val4;
    cin>>val4;
    h.del_node(val4);
    h.print();
}
