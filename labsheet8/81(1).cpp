#include<iostream>
using namespace std;
struct Node
{
    int data;
    int power;
    Node *next;
};
Node *head1 = NULL;
Node *head2 = NULL;
Node *addhead = NULL;
void insert_value1(int value, int pow)
{
    Node *temp1 = new Node;
    temp1->data = value;
    temp1->power = pow;
    temp1->next = NULL;
    if(head1 == NULL)
        head1 = temp1;
    else
    {
        Node *t1 = head1;
        while (t1->next!= NULL)
        {
            t1 = t1->next;
        }
        t1->next = temp1;
    }
}
void insert_value2(int value, int pow)
{
    Node *temp2 = new Node;
    temp2->data = value;
    temp2->power = pow;
    temp2->next = NULL;
    if(head2 == NULL)
        head2 = temp2;
    else
    {
        Node *t2 = head2;
        while (t2->next!= NULL)
        {
            t2 = t2->next;
        }
        t2->next = temp2;
    }
}
void addpolynomial (Node *h1, Node *h2)
{

    Node *p1 = h1;
    Node *p2 = h2;
    while(p1!=NULL)
    {
        Node *addtemp = new Node;
        addtemp->data = (p1->data + p2->data);
        addtemp->power = p1->power;
        addtemp->next = NULL;
        if(addhead == NULL)
            addhead = addtemp;
        else
        {
            Node *add2 = addhead;
            while (add2->next!= NULL)
            {
                add2 = add2->next;
            }
            add2->next = addtemp;
        }
        p1=p1->next;
        p2=p2->next;
    }
}
void display()
{
    Node *temp = new Node();
    if(addhead == NULL)
        cout<<"Empty";
    else
    {
        temp = addhead;
        while(temp!=NULL)
        {
            cout<<temp->data<<" x^"<<temp->power<<"+";
            temp = temp->next;
        }
    }
}

int main()
{
    int degree,i,value;
    cout<<"Enter Degree of the polynomial : ";
    cin>>degree;
    cout<<"\n Entering polynomial 1\n";
    for(i=0; i<degree+1; i++)
    {
        cout<<"\nEnter coefficient for degree "<<i<<" : ";
        cin>>value;
        insert_value1(value,i);
    }
    cout<<"\n Entering polynomial 2\n";
    for(i=0; i<degree+1; i++)
    {
        cout<<"\nEnter coefficient for degree "<<i<<" : ";
        cin>>value;
        insert_value2(value,i);
    }

    addpolynomial(head1,head2);
    cout<<"\n\n\n\n\nSum of Polynomial =";
    display();
    cout<<"\n\n\n";
    return 0;
}

