#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++) {
			int count = 1;
			while(i+1<n && s[i] == s[i+1]) {
				i++;
				count++;
			}
			ans += (count/2) + (count%2);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
