#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x, ans = 0, temp;
		cin>>n>>x;
		ans = x;
		while(n--) {
			cin>>temp;
			x += temp;
			ans = max(ans, x);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
