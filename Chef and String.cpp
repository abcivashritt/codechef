#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int ans = 0;
		string s;
		cin>>s;
		for(int i=0;i<s.length()-1;i++) {
			if(s[i] != s[i+1]) {
				ans++;
				i++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
