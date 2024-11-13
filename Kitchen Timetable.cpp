#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans=0;
		cin>>n;
		vector < int > a(n+1, 0);
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(a[i+1] - a[i] >= temp)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
