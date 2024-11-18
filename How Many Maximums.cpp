#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 0;
		string s;

		cin>>n>>s;

		s = '0' + s + '1';

		for(int i=1;i<s.length();i++) {
			if(s[i-1] == '0' && s[i] == '1')
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
