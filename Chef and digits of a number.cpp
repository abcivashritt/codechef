#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int one = 0, zero = 0;
		string s;

		cin>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] == '1')
				one++;
			else
				zero++;
		}
		cout<<((s.length() == 1 || min(one, zero) == 1) ? "Yes" : "No")<<"\n";
	}
	return 0;
}
