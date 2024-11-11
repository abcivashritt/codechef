#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<(max(0,y-x) <= z*2 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
