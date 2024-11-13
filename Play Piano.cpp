#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		bool ans = true;
		cin>>s;
		for(int i=0;i<s.length();i+=2) {
			if(s[i] == s[i+1])
				ans = false;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
