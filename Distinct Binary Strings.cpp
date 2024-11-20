#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, c = 1;
		string s, t;

		cin>>n>>s;
		for(int i = 1;i<n;i++) {
			if(s[i] != s[i-1])
				c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}
