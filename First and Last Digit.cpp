#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int ans = s[0] - '0';
		ans += s[s.length()-1] - '0';
		cout<<ans<<"\n";
	}
	return 0;
}
