#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
public:
	string name;
	int age;
	string date;
	int tno;
	node * next;
	void getdetails()
	{
		getchar();
		cout<<"Enter name:";
		getline(cin,name);
		cout<<"Age:";
		cin>>age;
		getchar();
		cout<<"Enter Date:";
		getline(cin,date);
		cout<<"Enter Ticket Number:";
		cin>>tno;
	}
	void printdetails()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"Date:"<<date<<endl;
		cout<<"Ticket No:"<<tno<<endl;
	}
};
void swap(node * n1 , node * n2)
{
	string nm;
	nm= n1->name;
	n1->name = n2->name;
	n2->name = nm;
	nm= n1->date;
	n1->date = n2->date;
	n2->date = nm;
	int tn;
	tn= n1->tno;
	n1->tno	 = n2->tno;
	n2->tno = tn;
	tn= n1->age;
	n1->age	 = n2->age;
	n2->age = tn;
}
void sort( node * head)
{
	node * temp = head;
	while( temp != NULL)
	{
		node * temp1=temp->next;
		while( temp1!= NULL)
		{
			if(temp->name > temp1->name)
			{	temp->printdetails();
				temp1->printdetails();
				swap ( temp, temp1);
				temp->printdetails();
				temp1->printdetails();
			}
			temp1=temp1->next;
		}
		temp=temp->next;
		if(temp==NULL)
			break;
	}
}

int main()
{	int ch;
	node * head = NULL;
	node * prev= NULL;
	node * temp1=head;
	string nm;
	char chr;
	int test;

	while(1)
	{	node * temp=new node;
		cout<<endl;
		cout<<"1.Reserve   2.Cancel    3.DisplayTicket   4.DisplayPassenger   5.End \t";
		cin>>ch;
		switch( ch)
		{
			case 1 : temp->getdetails();
					 temp->next=NULL;
					 if( head == NULL)
					 	head=temp;
					 else
					 	prev->next =temp;
					 prev=temp;
					 break;
			case 2 : getchar();
					 cout<<"Enter passenger name: ";
					 getline(cin,nm);
					 temp1=head;
					 while( temp1 != NULL)
						{
							if(temp1->name == nm)
								break;
							temp1=temp1->next;
						}
					  if(temp1!=NULL)
					  {
					  	cout<<"Ticket is cancelled\n";
					  	temp1->date="_";
					  	temp1->tno=-1;
					  }
					  else
					  	cout<<"Passenger does not exist"<<endl;
					  break;
			case 3: cout<<"Enter ticket number: ";
					cin>>test;
					 temp1=head;
					 while( temp1 != NULL)
						{
							if(temp1->tno == test)
								break;
							temp1=temp1->next;
						}
					  if(temp1!=NULL)
					  {
					  	cout<<"Ticket is reserved by "<<temp1->name<<endl;

					  }
					  else
					  	cout<<"Ticket is not reserved"<<endl;
					  break;
			case 4 : getchar();
					 cout<<"Enter passenger name: ";
					 getline(cin,nm);
					 temp1=head;
					 while( temp1 != NULL)
						{
							if(temp1->name == nm)
								break;
							temp1=temp1->next;
						}
					  if(temp1!=NULL)
					  	temp1->printdetails();
     				  else
					  	cout<<"Passenger does not exist"<<endl;
					  break;

			default: break;
		}
		cout<<"Run again ? Y/N  : " ;
		cin>>chr;
		if(chr!='Y' && chr!='y')
			break;
	}
	cout<<endl;
	node * tempx = head;
	while( tempx != NULL)
	{
		node * tempy=tempx->next;
		while( tempy!= NULL)
		{
			if(tempx->name > tempy->name)
			{
				string nm;
				nm= tempx->name;
				tempx->name = tempy->name;
				tempy->name = nm;

				nm= tempx->date;
				tempx->date = tempy->date;
				tempy->date = nm;

				int tn;

				tn= tempx->tno;
				tempx->tno	 = tempy->tno;
				tempy->tno = tn;


				tn= tempx->age;
				tempx->age	 = tempy->age;
				tempy->age = tn;

			}
			tempy=tempy->next;
		}
		tempx=tempx->next;
		if(tempx==NULL)
			break;
	}
	int i=1;
	cout<<"Displaying \n";
	temp1=head;
	while( temp1 != NULL)
	{	cout<<"Passenger #"<<i<<endl;
		temp1->printdetails();
		temp1=temp1->next;
		cout<<endl;
		i++;
	}
	return 0;


}

