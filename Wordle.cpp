#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s,t,ans="";
		cin>>s>>t;
		for(int i=0;i<5;i++) {
			if(s[i] == t[i])
				ans += 'G';
			else
				ans += 'B';
		}
		cout<<ans<<"\n";
	}
	return 0;
}
