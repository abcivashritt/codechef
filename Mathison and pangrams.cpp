#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int ans = 0;
		string s;
		vector < bool > occ(26, false);
		vector < int > cost(26, 0);
		for(int i=0;i<26;i++)
			cin>>cost[i];
		cin>>s;
		for(int i=0;i<s.length();i++)
			occ[s[i] - 'a'] = true;
		for(int i=0;i<26;i++) {
			if(!occ[i])
				ans += cost[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
