#include<iostream>
using namespace std;
class mystack{
	int arr[200];
	int top[5];
	public:mystack(){
		for(int i=0;i<5;i++)
			top[i]=(40*i)-1;
	}
	void push(int x,int i){
		int y=top[i];
		arr[++y]=x;
		top[i]++;
	}
	int pop(int i){
		int y=top[i];
		top[i]--;
		return arr[y--];
	}
	bool isempty(int i){
		int y=top[i];
		if(y==-1+40*i)
			return true;
		else
			return false;
	}
};
int main(){
	mystack s;
	cout<<"\n There are 5 stacks..use wisely\n";
	for(int j=0;j<10;j++){
		s.push(j*2,0);
		s.push(j*3,1);
		s.push(j*4,2);
		s.push(j*5,3);
		s.push(j*10,4);
	}
	for(int i=0;i<5;i++){
		cout<<"\nStack number "<<i<<endl;
		while(!s.isempty(i))
			cout<<s.pop(i)<<endl;
	}
	return 0;
}
