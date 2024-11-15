#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '1') {
				if(i > 0 && s[i] == s[i-1]) {
					ans = 2;
					break;
				}
				else
					ans = 1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
