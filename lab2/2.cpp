#include<iostream>
#include<string.h>
using namespace std;
 class Directory
{
string Firstname;
string LastName;
int number;
int n;
public:
void getdata()
{

    cout<<"enter the number of users:";
    cin>>n;
    cout<<"enter the details:";
    for(int i=0;i<n;i++)
    {
    cout<<"enter first name:";
    cin>>Firstname;
    cout<<"enter second name:";
    cin>>LastName;
    cout<<"enter number:";
    cin>>number;
    }
}
void search()
{
    char ch;
    int f=0;
    string name;
    cout<<"Do you want to search by first name or last name?f/n:";
    cin>>ch;
    if(ch=='f')
        {
        cout<<"enter the first name to search:";
        cin>>name;
        for(int i=0;i<n;i++)
        {
            if(name==Firstname)
            {
            f=i;
            }
        }
        cout<<"name found at:"<<f+1;
        }
        else if(ch=='l')
        {
          cout<<"enter the last name to search:";
        cin>>name;
        for(int i=0;i<n;i++)
        {
            if(name==LastName)
            f=i;
        }
        cout<<"name found at:"<<f+1;
        }

}
};
int main()
{
Directory d;
d.getdata();
d.search();
return 0;
}

