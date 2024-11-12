#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,ans = INT_MAX,curr=0;
		string a,b;
		cin>>n>>m;
		cin>>a>>b;
		for(int i=0;i<=n-m;i++) {
			curr = 0;
			for(int j=0;j<m;j++) {
				if(a[i+j] != b[j])
					curr++;
			}
			ans = min(curr, ans);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
