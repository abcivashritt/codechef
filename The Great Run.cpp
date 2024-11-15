#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k, temp, ans = 0;

		cin>>n>>k;

		vector < int > sum(n, 0);

		for(int i=0;i<n;i++) {
			cin>>temp;
			sum[i] = temp + (i>0 ? sum[i-1] : 0);
		}
		for(int i=0;i<n;i++) {
			ans = max(ans, sum[i] - (i>=k ? sum[i-k] : 0));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
