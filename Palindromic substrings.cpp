#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		bool occ = false;
		string s, t;
		vector < bool > a(26, false), b(26, false);

		cin>>s>>t;
		for(int i=0;i<s.length();i++)
			a[s[i] - 'a'] = true;
		for(int i=0;i<t.length();i++)
			b[t[i] - 'a'] = true;

		for(int i=0;i<26;i++) {
			if(a[i] && b[i])
				occ = true;
		}
		cout<<(occ ? "Yes" : "No")<<"\n";
	}
	return 0;
}
