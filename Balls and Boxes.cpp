#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		n -= k;
		cout<<((n >= k*(k-1)/2 || n >= k*(k+1)/2) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
