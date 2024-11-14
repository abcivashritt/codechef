#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,ans = 1;
		cin>>n>>k;
		while((n = n/k) > 0)
			ans++;
		cout<<ans<<"\n";
	}
	return 0;
}
