#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--) {
		int count = 0, temp;
		for(int i=0;i<5;i++) {
			cin>>temp;
			count += temp;
		}
		switch(count) {
			case 0:
				cout<<"Beginner\n";
				break;
			case 1:
				cout<<"Junior Developer\n";
				break;
			case 2:
				cout<<"Middle Developer\n";
				break;
			case 3:
				cout<<"Senior Developer\n";
				break;
			case 4:
				cout<<"Hacker\n";
				break;
			case 5:
				cout<<"Jeff Dean\n";
				break;
		}
	}
	return 0;
}
