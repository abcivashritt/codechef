#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int p, ans;
		cin>>p;
		ans = p/2048;
		p = p%2048;
		while(p > 0) {
			if(p&1)
				ans++;
			p = p>>1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
