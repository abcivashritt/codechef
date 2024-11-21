#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string s;
		cin>>s;
		if(s[0] == '1')
			cout<<s[0]<<"0"<<s.substr(1, s.length()-1)<<"\n";
		else
			cout<<"1"<<s<<"\n";
	}
	return 0;
}
