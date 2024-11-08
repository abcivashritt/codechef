#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,k;
		cin>>n>>x>>k;
		cout<<(k/x >= n?"YES":"NO")<<"\n";
	}
	return 0;
}
