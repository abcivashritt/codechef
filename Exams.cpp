#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<(z*2 > x*y?"YES":"NO")<<"\n";
	}
	return 0;
}
