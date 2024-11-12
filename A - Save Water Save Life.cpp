#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int h,x,y,c;
		cin>>h>>x>>y>>c;
		cout<<(h*(x+y/2) <= c ? "YES" : "NO")<<"\n";
	}
	return 0;
}
