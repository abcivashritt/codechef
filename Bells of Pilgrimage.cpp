#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,k,p;
		cin>>n>>x>>k>>p;
		cout<<(p + min(x,k)*10 + max(0,k-x)*5 + (k==n?20:0))<<"\n";
	}
	return 0;
}
