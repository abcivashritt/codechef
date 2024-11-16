#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int change = 0;
		string s;
		cin>>s;
		if(s[0] == '1')
			change++;
		for(int i=1;i<s.length();i++) {
			if(s[i] != s[i-1] && s[i] == '1')
				change++;
		}
		cout<<(change == 1 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
