#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<(n%2)*m + (m%2)*n - ((n%2 && m%2) ? 1 : 0)<<"\n";
	}
	return 0;
}
