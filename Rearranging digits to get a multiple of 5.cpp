#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool ans = false;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '5' || s[i] == '0') {
				ans = true;
				break;
			}
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
