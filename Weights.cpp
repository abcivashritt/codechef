#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int w,x,y,z;
		cin>>w>>x>>y>>z;
		cout<<((w == x || 
					w == y ||
					w == z ||
					w == x+y ||
					w == x+z ||
					w == y+z ||
					w == x+y+z) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
