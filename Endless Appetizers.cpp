#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,r;
		cin>>x>>y>>r;
		x = x + r/30;
		cout<<((y+x-1)/y)<<"\n";
	}
	return 0;
}
