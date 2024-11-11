#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int s,x,y,z;
		cin>>s>>x>>y>>z;
		z = max(0, z-s+x+y);
		cout<<(z == 0 ? 0 : ((z-x <= 0 || z-y <= 0) ? 1 : 2))<<"\n";
	}
	return 0;
}
