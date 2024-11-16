#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0, temp1, temp2;
		cin>>n;
		for(int i=1;i<=n;i++) {
			cin>>temp1>>temp2;
			ans ^= i;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
