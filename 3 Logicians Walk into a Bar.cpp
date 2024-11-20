#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		bool zo = false;
		string s;
		cin>>n>>s;
		for(int i=0;i<n-1;i++) {
			if(s[i] == '1' && !zo)
				cout<<"IDK\n";
			else {
				cout<<"NO\n";
				zo = true;
			}
		}
		if(s[n-1] == '1' && !zo)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
