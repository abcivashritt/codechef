#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,k;
		cin>>n>>m>>k;
		cout<<(n<=k*m?"YES":"NO")<<"\n";
	}
	return 0;
}
