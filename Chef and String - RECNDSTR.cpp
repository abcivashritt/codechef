#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		bool same_chars = true;
		string s;

		cin>>s;

		if(s.length() % 2) {
			for(int i=1;i<s.length();i++)
				if(s[i] != s[i-1])
					same_chars = false;
		}
		else {
			for(int i=2;i<s.length();i++)
				if(s[i] != s[i-2])
					same_chars = false;
		}

		cout<<(same_chars ? "YES" : "NO")<<"\n";
	}
	return 0;
}
