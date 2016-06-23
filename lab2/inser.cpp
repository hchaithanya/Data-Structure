//using insertion sort//
#include<iostream>
#include<cstring>
using namespace std ;
class employee
{
public:

    string lastname,firstname;
    double hourlywage;
    int yearswithcompany;
    void getinfo()
    {
    cout<<"enter last name "<<endl;
    cin>>lastname;
    cout<<"enter first name "<<endl;
    cin>>firstname;
    cout<<"enter hourly wage "<<endl;
    cin>>hourlywage;
    cout<<"enter years with the company "<<endl;
    cin>>yearswithcompany;
    }
    void dispinfo()
    {
    cout<<firstname<<"  "<<lastname<<endl<<"hourly wage :"<<hourlywage<<endl<<"years with the company "<<yearswithcompany<<endl;
    }
};
int main()
{
  int l;
employee a[5];
cout<<"enter the number of employees:";
cin>>l;
for(int i=0;i<l;i++)
a[i].getinfo();

for(int j=1;j<l;j++)
{
employee k=a[j];
int i=j-1;
while(i>=0 && a[i].yearswithcompany < k.yearswithcompany)
{
a[i+1]=a[i];
i--;
}
a[i+1]=k;
}

for(int i=0;i<l;i++)
a[i].dispinfo();

}
