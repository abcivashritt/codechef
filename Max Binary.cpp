#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		string s;

		cin>>n>>k>>s;
		if(s[0] == '0' && k > 0) {
			s[0] = '1';
			k--;
		}	
		s = s + string(k, '0');
		cout<<s<<"\n";
	}
	return 0;
}
