#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<2*n - 2 + min(n-x, n-y) + min(n-x, y-1) + min(x-1, y-1) + min(x-1,n-y)<<"\n";
	}
	return 0;
}
