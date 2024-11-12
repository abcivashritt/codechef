#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,ans = 2, sum = 0;
		cin>>n>>x;
		for(int i=1;i<x;i++) {
			ans += 1;
			ans = ans<<1;
		}
		for(int i=0;i<n-x;i++) {
			ans = ans<<1;
			sum++;
			sum = sum<<1;
		}
		cout<<ans-sum<<"\n";
	}
	return 0;
}
