#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,n,ans;
		cin>>a>>b>>n;

		if(a%b) {
			ans = ((n+a-1)/a)*a;
			while(ans % b == 0)
				ans += a;
		}
		else
			ans = -1;
		cout<<ans<<"\n";
	}
	return 0;
}
