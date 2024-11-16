#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int ans = 1;
		string s;
		cin>>s;
		ans += 10*count(s.begin(), s.end(), '1');
		if(s[0] == '1' && s[2] == '1')
			ans += 100;
		if(s[0] == '1' && s[3] == '1')
			ans += 100;
		if(s[1] == '1' && s[2] == '1')
			ans += 100;
		if(s[1] == '1' && s[3] == '1')
			ans += 100;

		cout<<ans<<"\n";
	}
	return 0;
}
