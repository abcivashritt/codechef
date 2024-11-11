#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s, ans = "";
		cin>>n>>s;

		for(int i=0;i<n;i+=2) {
			if(s[i] == '0' && s[i+1] == '0')
				ans += 'A';
			else if(s[i] == '0' && s[i+1] == '1')
				ans += 'T';
			else if(s[i] == '1' && s[i+1] == '0')
				ans += 'C';
			else if(s[i] == '1' && s[i+1] == '1')
				ans += 'G';
		}
		cout<<ans<<"\n";
	}
	return 0;
}
