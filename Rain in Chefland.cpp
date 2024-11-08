#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x<3?"LIGHT":(x<7?"MODERATE":"HEAVY"))<<"\n";
	}
	return 0;
}
