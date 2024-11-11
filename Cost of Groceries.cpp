#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,temp,ans=0;
		cin>>n>>x;
		vector < int > a(n);
		for(int i = 0;i<n;i++)
			cin>>a[i];
		for(int i = 0;i<n;i++) {
			cin>>temp;
			if(a[i] >= x)
				ans += temp;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
