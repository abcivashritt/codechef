#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp <= 2*a[i] && a[i] <= 2*temp)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
