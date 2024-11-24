#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, q, c = 1, max_c = 1;
		string s;
		char prev, curr;

		cin>>n>>q>>s;
		for(int i=1;i<=n;i++) {
			c = 1;
			while(i < n && s[i] == s[i-1]) {
				i++;
				c++;
			}
			max_c = max(c, max_c);
		}
		cout<<max_c<<" ";

		prev = s[s.length() - 1];
		while(q--) {
			cin>>curr;
			if(curr == prev)
				c++;
			else
				c = 1;
			max_c = max(c, max_c);
			cout<<max_c<<" ";
			prev = curr;
		}
		cout<<"\n";
	}
	return 0;
}
