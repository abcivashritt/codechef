#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		cout<<(k*x) + max(0,n-k)*min(x,y)<<"\n";
	}
	return 0;
}
