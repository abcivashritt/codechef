#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		cout<<((n*10 <= k && k <= n*12) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
