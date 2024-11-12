#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		string sa,sb;
		vector < bool > a(26, false);
		bool ans = false;

		cin>>n>>m>>sa>>sb;
		for(int i=0;i<n;i++)
			a[sa[i] - 'a'] = true;
		for(int i=0;i<m;i++)
			a[sb[i] - 'a'] = true;
		for(int i=0;i<26;i++) {
			if(!a[i])
				ans = true;
		}
		cout<<((ans) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
