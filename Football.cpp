#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0, temp;
		cin>>n;
		vector < int > a(n);

		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			ans = max(ans, 20*a[i] - 10*temp);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
