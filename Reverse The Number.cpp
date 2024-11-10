#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = s.length();
		while(n-- && s[n] == '0') {
		}
		n++;
		while(n--) {
			cout<<s[n];
		}
		cout<<"\n";
	}
}
