#include<iostream>
using namespace std;

class Directory
{
    public:
    string frstname;
    string lastname;
    int num;
};

int main()
{
    Directory d[20];
    int n,ch;
    int j;
    string fname,lname;
    cout<<"Enter the number of users ";
    cin>>n;
    cout<<"Enter the details of the users ";
    for(int i=0;i<n;i++)
    {
      j=i+1;
      cout<<j<<"First name";
        cin>>d[i].frstname;
	cout<<endl;
	cout<<j<<"Last name";
	cin>>d[i].lastname;
	cout<<j<<"ph number";
	cin>>[i].num;
	cout<<"\n";
    }
    cout<<"\n Menu\n 1) search using frstname \n2) search using lastname ";
    cin>>ch;
    switch(ch)
    {
        case 1:
                cout<<"Enter the first time";
                cin>>fname;
                for(int i=0;i<n;i++)
                {
                    if(d[i].frstname==fname)
                    {
                        cout<<"The details of the user with first name "<<fname<<"are ";
                        cout<<d[i].frstname<<" "<<d[i].lastname<<" "<<d[i].num;
                    }
                }
                break;
        case 2: cout<<"Enter the last name ";
                cin>>lname;
                for(int i=0;i<n;i++)
                {
                    if(d[i].lastname== lname )
                    {
                        cout<<"The details  of the user with last name "<<lname<<"are ";
                        cout<<d[i].frstname<<" "<<d[i].lastname<<" "<<d[i].num;
                    }
                }
                break;
        default: cout<<"Invalid choice ";
    }
}
