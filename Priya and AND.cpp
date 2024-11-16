#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0;
		cin>>n;
		vector < int > a(n);

		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if((a[i] & a[j]) == a[i])
					ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
