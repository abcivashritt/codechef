#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0;
		vector < bool > occ(26, false);
		string a,b;
		cin>>n>>a>>b;
		for(int i=0;i<n;i++) {
			if(b[i] != a[i] && !occ[b[i] - 'a']) {
				occ[b[i] - 'a'] = true;
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
