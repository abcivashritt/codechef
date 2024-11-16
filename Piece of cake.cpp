#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		vector < int > count(26, 0);
		bool ans = false;

		cin>>s;
		for(int i=0;i<s.length();i++)
			count[s[i] - 'a']++;
		for(int i=0;i<26;i++) {
			if(count[i] == s.length() - count[i]) {
				ans = true;
				break;
			}
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
