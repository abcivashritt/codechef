#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,curr,prev,ans=0,first;
		cin>>n;
		cin>>prev;
		first = prev;
		while(--n) {
			cin>>curr;
			ans = max(ans, curr + prev);
			prev = curr;
		}
		ans = max(ans, curr + first);
		cout<<ans<<"\n";
	}
	return 0;
}
