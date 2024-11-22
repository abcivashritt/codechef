#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	cin.ignore();
	while(T--) {
		string s, ans = "", part = "";
		vector < string > parts;
		getline(cin, s);
		for(int i=0;i<s.length();i++) {
			while(i < s.length() && s[i] != ' ' && s[i] != '\0') {
				if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i] = (char)s[i] - 'A' + 'a';
				part += s[i];
				i++;
			}
			parts.push_back(part);
			part = "";
		}
		parts[parts.size() - 1][0] = (char)parts[parts.size() - 1][0] - 'a' + 'A';
		for(int i=0;i<parts.size() - 1;i++) {
			cout<<char(parts[i][0] - 'a' + 'A')<<". ";
		}
		cout<<parts[parts.size() - 1]<<"\n";
	}
	return 0;
}
