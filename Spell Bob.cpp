#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string s, t;
		cin>>s>>t;

		if( ((s[0] == 'b' || t[0] == 'b') && (s[1] == 'b' || t[1] == 'b') && (s[2] == 'o' || t[2] == 'o')) || 
				((s[0] == 'b' || t[0] == 'b') && (s[1] == 'o' || t[1] == 'o') && (s[2] == 'b' || t[2] == 'b')) ||
				((s[0] == 'o' || t[0] == 'o') && (s[1] == 'b' || t[1] == 'b') && (s[2] == 'b' || t[2] == 'b')) )
			cout<<"yes\n";
		else
			cout<<"no\n";
		
	}
	return 0;
}
