#include<iostream>
using namespace std;

int n;

class Stack {
    public :
        int S[50];
        int top;

        Stack() {
            top = 0;
        }

        void Push(int x) {
            if(top == 50)
                cout<<"\nStack full.";
            else {
                S[top] = x;
                top++;
            }
        }

        void Pop() {
            if(top == 0)
                cout<<"\nStack empty.";
            else
                top--;
        }

        void Sort() {
            int temp;
            for(int i=0 ; i<n ; i++) {
                for(int j=n-1 ; j>i ; j--) {
                    if(S[j] > S[j-1]) {
                        temp = S[j];
                        S[j] = S[j-1];
                        S[j-1] = temp;
                    }
                }
            }
        }
} BStack,GStack,TStack;

void Merge() {
    for(; (BStack.top != 0) || (GStack.top != 0) ; ) {
        TStack.S[TStack.top++] = BStack.S[--BStack.top];
        TStack.S[TStack.top++] = GStack.S[--GStack.top];
    }
    if(BStack.top == 0) {
        for(; GStack.top != 0 ;)
           TStack.S[TStack.top++] = GStack.S[GStack.top--];
    }
    else if(GStack.top == 0) {
        for(; BStack.top != 0;)
            TStack.S[TStack.top++] = BStack.S[BStack.top--];
    }
}

void Display() {
    for(int i=0 ; i<n ; i=i+2 ) {
        cout<<"B "<<TStack.S[i]<<"\n";
        cout<<"G "<<TStack.S[i+1]<<"\n";

    }
}

int main() {
    int rno;
    char gender;
    cout<<"\nEnter the total no. of students : ";
    cin>>n;
    for(int i=0 ; i<n ; i++) {
        cout<<"\nEnter whether the student is boy or girl? (B/G) : ";
        cin>>gender;
        cout<<"\nEnter the roll no. : ";
        cin>>rno;
        if(gender == 'B'    )
            BStack.Push(rno);
        else if(gender == 'G')
            GStack.Push(rno);
        else
            cout<<"\n Enter G or B : ";
    }
    GStack.Sort();
    BStack.Sort();
    Merge();
    Display();
}

