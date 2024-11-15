#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int ans = 0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] >= '0' && s[i] <= '9')
				ans += s[i] - '0';
		}
		cout<<ans<<"\n";
	}
	return 0;
}
