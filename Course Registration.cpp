#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,k;
		cin>>n>>m>>k;
		cout<<(m>=n+k?"YES":"NO")<<"\n";
	}
	return 0;
}
