#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char c;
		cin>>c;
		switch(c) {
			case 'B':
			case 'b':
				cout<<"BATTLESHIP";
				break;
			case 'C':
			case 'c':
				cout<<"CRUISER";
				break;
			case 'D':
			case 'd':
				cout<<"DESTROYER";
				break;
			case 'F':
			case 'f':
				cout<<"FRIGATE";
				break;
		}
		cout<<"\n";
	}
	return 0;
}
