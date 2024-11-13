#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int ans = 0;
		string s;
		cin>>s;
		for(int i=1;i<s.length();i++) {
			if(s[i-1] == '<' && s[i] == '>')
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
