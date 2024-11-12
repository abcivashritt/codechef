#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;
		cout<<((x >= xr*d && y >= yr*d) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
