#include<iostream>
using namespace std;
#define MAX 100
class mystack{
	char arr[MAX];
	int top;
	public:mystack(){
		top=-1;
	}
	void push(int x){
		arr[++top]=x;
	}
	char pop(){
		return arr[top--];
	}
	bool isempty(){
		if(top==-1)
			return true;
		else
			return false;
	}
	char Top(){
		return arr[top];
	}
};
int main(){
	mystack s,t;
	for(int i=0;i<=90;i++)
		s.push((char)i);
	while(!s.isempty()){
		char a=s.pop();
		if((a>=65 && a<=90)||(a>=97 && a<=122))
			t.push(a);
	}
	while(!t.isempty())
		cout<<(char)t.pop()<<endl;
	return 0;
}
		
