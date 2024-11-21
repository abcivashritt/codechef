#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int c = 0;
		string s, t;
		vector < int > a(128, 0), b(128, 0);

		cin>>s>>t;
		for(int i=0;i<s.length();i++)
			a[s[i]]++;
		for(int i=0;i<t.length();i++)
			b[t[i]]++;

		for(int i=0;i<128;i++) {
			c += min(a[i], b[i]);
		}
		cout<<c<<"\n";
	}
	return 0;
}
