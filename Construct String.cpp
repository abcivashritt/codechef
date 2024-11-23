#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--) {
		int n, count = 1;
		string s, t = "";
		cin>>n>>s;

		for(int i = 1;i<=n;i++) {
			cout<<s[i-1];
			while(i < n && s[i] == s[i-1]) {
				i++;
				count++;
			}
			if(count%2 == 0)
				cout<<s[i-1];
			count = 1;
		}
		cout<<"\n";
	}
	return 0;
}
