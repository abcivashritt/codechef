#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0, pow = 1;
		cin>>n;
		while(n > 1) {
			if(n & 1)
				ans += pow;
			pow = pow<<1;
			n = n>>1;
		}
		cout<<ans*2<<"\n";
	}
	return 0;
}
