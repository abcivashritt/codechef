#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		cout<<(s[s.length()-1] == '0' ? "LOSE" : "WIN")<<"\n";
	}
	return 0;
}
