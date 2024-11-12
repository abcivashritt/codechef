#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp,a = 0,b = 0;
		for(int i=0;i<5;i++) {
			cin>>temp;
			a += temp;
			cin>>temp;
			b += temp;
		}
		cout<<(a == b ? 0 : (a > b ? 1 : 2))<<"\n";
	}
	return 0;
}
