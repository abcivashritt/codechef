#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,b,pi,wi,hi,ans = -1;
		cin>>n>>b;
		while(n--) {
			cin>>wi>>hi>>pi;
			if(pi <= b)
				ans = max(wi*hi, ans);
		}
		if (ans == -1)
			cout<<"no tablet\n";
		else
			cout<<ans<<"\n";
	}
	return 0;
}
