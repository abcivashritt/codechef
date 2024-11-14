#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n,m,temp,ans = 0;
		cin>>n>>m;
		for(int i=0;i<n;i++) {
			cin>>temp;
			ans += max(abs(1-temp), abs(m-temp));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
