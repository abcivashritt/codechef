#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	cin.ignore();
	while(T--) {
		bool found = false;
		string s;

		getline(cin, s);
		s = ' ' + s + ' ';
		for(int i=0;i<s.length()-2;i++) {
			if(s[i] == ' ' && s[i+1] == 'n' && s[i+2] == 'o' && s[i+3] == 't' && s[i+4] == ' ') {
				found = true;
				break;
			}
		}

		cout<<(found ? "Real Fancy" : "regularly fancy")<<"\n";
	}
	return 0;
}
