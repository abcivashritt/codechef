#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,k;
		cin>>n>>x>>k;
		cout<<(max(x%k, (n-x)%k) - min(x%k, (n-x)%k))<<"\n";
	}
	return 0;
}
