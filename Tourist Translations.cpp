#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	vector < char > change(26);
	cin>>T;
	for(int i=0;i<26;i++)
		cin>>change[i];
	while(T--) {
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] >= 'a' && s[i] <= 'z')
				cout<<change[s[i] - 'a'];
			else if(s[i] >= 'A' && s[i] <= 'Z')
				cout<<char(change[s[i] - 'A'] - 'a' + 'A');
			else if(s[i] == '_')
				cout<<" ";
			else
				cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}
