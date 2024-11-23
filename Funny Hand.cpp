#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,a,b;
		cin>>n>>a>>b;
		if(min(a,b) + 1 == max(a,b)) {
			int ans = 0;
			if(min(a,b) > 1)
				ans++;
			if(max(a,b) < n)
				ans++;
			cout<<ans<<"\n";
		}
		else if(min(a,b) + 2 == max(a,b)) {
			cout<<1<<"\n";
		}
		else
			cout<<0<<"\n";
	}
	return 0;
}
