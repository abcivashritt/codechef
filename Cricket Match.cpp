#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<(n<=m*36?"YES":"NO")<<"\n";
	}
	return 0;
}
