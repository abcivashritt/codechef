#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		bool men = true, women = true;
		string s, t;
		int i = 0, j = 0;

		cin>>s>>t;
		for(i=0, j=0;i<s.length() && j<t.length();i++, j++) {
			while(j < t.length() && s[i] != t[j])
				j++;
		}
		if(i < s.length()) {
			men = false;
			for(i=0, j=0;i<s.length() && j<t.length();i++, j++) {
				while(i < s.length() && s[i] != t[j])
					i++;
			}
		}
		if(j < t.length())
			women = false;
		cout<<((!men && !women) ? "NO" : "YES")<<"\n";

	}
	return 0;
}
