#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x, swipe = 0;
		string s;
		bool ans = true;

		cin>>n>>x>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '0' && swipe == 0) {
				ans = false;
				break;
			}
			else if(s[i] == '1') 
				swipe = x;
			else
				swipe--;
		}
		cout<<(ans ? "YES" : "NO") <<"\n";
	}
	return 0;
}
