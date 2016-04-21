
#include<iostream>
using namespace std;
struct Node{
    int   data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void insert_head(int value){
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
        head = temp;
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insert_tail(int value) {
    Node *temp1 = new Node();   
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
        head = temp;
    else    {
        temp1 = head;
        while(temp1->next!= NULL){
            temp1 = temp1->next;
        }
            temp1->next = temp;
            temp->prev = temp1;
            }
}
void insert_pos(int value, int pos)  {
    Node *temp2 = new Node();
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    int i = 1;
    temp2 = head;
    while(i<pos-1)  {
        i++;
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next->prev =  temp;
    temp2->next = temp;
    temp->prev = temp2;
}
void display()
{
    Node *temp;
    temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
void Duplicate()
{
    int value;
    int k=0;
    Node *temp = head;
    Node *temp1 = temp->next;
    while(temp!= NULL)  {
    while (temp1!=NULL) {
        if(temp->data == temp1->data)   {
           value = temp->data;
           k++;
        }
        temp1 = temp1->next;
        }
        temp = temp->next;
    }
cout<<"The number of duplicates are"<<k<<endl;
}



int main()  {
int opt,sopt,value,pos,n;
int mopt = 1;
do  {
    cout<<"Enter any of the option:\n1.Insert\n2.Find Duplicates\n";
    cin>>opt;
    switch(opt)
    {
        case 1  :   cout<<"Enter any one of the option:\n1.Insert at head\n2.Insert at tail\n3.Insert at position\n";
                    cin>>sopt;
                    cout<<"Enter the value to be entered";
                    cin>>value;
                    switch(sopt){
                        case 1  : insert_head(value);
                                  display();
                                  break;
                        case 2  : insert_tail(value);
                                  display();
                                  break;
                        case 3  : cout<<"Enter the positon to be entered";
                                  cin>>pos;
                                  insert_pos(value,pos);
                                  display();
                                  break;
                    }
                    break;
        case 2  :   Duplicate();
                    display();
                    break;

    }
    cout<<"Press 1 to continue: ";
    cin>>mopt;
}while(mopt==1);
return 0;
}
