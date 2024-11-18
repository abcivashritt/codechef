#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,count = 1, ans = 0;
		string s;

		cin>>n>>s;
		for(int i=1;i<=n;i++) {
			while(i<n && s[i-1] == s[i]) {
				i++;
				count++;
			}
			ans += max(1, (count+1)/2);
			count = 1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
