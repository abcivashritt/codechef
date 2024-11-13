#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int ans = 0;
		cin>>s;
		for(int i=0;i<s.length();i++)
			if(s[i] == '4')
				ans++;
		cout<<ans<<"\n";
	}
	return 0;
}
