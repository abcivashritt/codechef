#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		cin>>n>>s;
		for(int i=0;i<n-1;i+=2) {
			char a = s[i], b = s[i+1];
			s[i] = char('a' + 26 - (b - 'a' + 1));
			s[i + 1] = char('a' + 26 - (a - 'a' + 1));
		}
		if(n%2)
			s[n-1] = char('a' + 26 - (s[n-1] - 'a' + 1));
		cout<<s<<"\n";
	}
	return 0;
}
