#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<max(0, ((x*y-z+y-1)/y))<<"\n";
	}
	return 0;
}
