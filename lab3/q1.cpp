#include <iostream>
#include <cstring>

using namespace std;

class myStack {
	char arr[200];
	int top, size;
public:
	myStack() :top(-1), size(200){
	}

	void push(char x) {
		if(top >= size)
			cout << "Stack Overflow" << endl;
		else
			arr[++top] = x;
	}

	char pop() {
		if(top == -1) {
			cout << "Stack Underflow" << endl;
		}
		else
			return arr[top--];
	}

	bool isEmpty() {
		if(top == -1)
			return 1;
		return 0;
	}

	void display() {
		for (int i=0;i<top;++i)
			cout << arr[i] << "";
		cout << endl;
	}

	int topIs() {
		return top;
	}

	char getTop() {
		return arr[top];
	}
};


int main() {
	myStack S;
	char p[100], q[100];
	cout << "Enter the Expression" << endl;
	cin >> q;
	int j = 0, len = strlen(q);
	q[len++] = ')';
	cout << q << endl;
	for(int i=0;i<=len;++i) {
		S.display();
		if(q[i] == ')') {
			while(S.getTop()!='(') {
				p[j++]=S.pop();
			  cout << p << endl << q << endl << i << endl;
			}
		}
		else if(q[i] == '(')
			S.push(q[i]);
		else if(q[i] >= 'a' && q[i] <= 'z' || q[i] >= 'A' && q[i] <= 'Z')
			p[j++] = q[i];
		else if(q[i]=='+'||q[i]=='-'||q[i]=='*'||q[i]=='/'||q[i]=='^') {
			while(S.getTop()!='(') {
				if(q[i]=='+'||q[i]=='-') {
					if(S.getTop()=='+'||S.getTop()=='-')
						p[j++]=S.pop();
					else if(S.getTop()=='^')
						p[j++]=S.pop();
					else if(S.getTop()=='*'||S.getTop()=='/')
						p[j++]=S.pop();
					else break;
				}
				else if(q[i]=='*'||q[i]=='/') {
					if(S.getTop()=='^')
						p[j++]=S.pop();
					else if(S.getTop()=='*'||S.getTop()=='/')
						p[j++]=S.pop();
					else break;
				}
				else if(q[i]=='^') {
					if(S.getTop()=='^')
						p[j++]=S.pop();
					else break;
				}
			}
			S.push(q[i]);
		}

	}

	cout <<"PostFix = " << p <<endl;
	return 0;

}
