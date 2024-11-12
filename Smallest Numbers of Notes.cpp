#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0;
		cin>>n;
		int a[] = {100, 50, 10, 5, 2, 1};
		for(int i=0;i<sizeof(a) && n>0;i++) {
			ans += n/a[i];
			n %= a[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
