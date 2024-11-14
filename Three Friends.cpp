#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<((x+y == z || x+z == y || y+z == x) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
