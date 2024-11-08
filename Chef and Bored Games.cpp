#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int ans = 0;
		for(int i=1;i<=n;i+=2) {
			ans += ((n-i+1) * (n-i+1));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
