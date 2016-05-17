#include <iostream>
using namespace std;

int main() {
	char idNo[100];
	int N, j, t;
	cout<<"Enter no of entires: ";
	cin >> N;

	for(int i = 0; i < N ; ++i)
	{   cout<<"Enter ID: ";
		cin>>idNo;

		j = 0;
		while(idNo[j] <= 'z' && idNo[j] >= 'a') {
			if(j == 3) {
				cout << "INVALID" << endl;
				return 0;
			}
			j++;
		}

		t = j;

		while(idNo[j] <= '9' && idNo[j] >= '0') {
			if(j == 11) {
				cout << "INVALID" << endl;
				return 0;
			}
			j++;
		}

		if(j < t + 2) {
			cout << "INVALID" << endl;
			return 0;
		}

		t = j;

		while(idNo[j] <= 'Z' && idNo[j] >= 'A') {

			j++;
		}

		if(j < t + 3) {
			cout << "INVALID" << endl;
			return 0;
		}

	cout << "VALID" << endl;
	}

	return 0;
}

