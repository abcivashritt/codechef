#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<x*y + ((x-1)/3)*z<<"\n";
	}
	return 0;
}
