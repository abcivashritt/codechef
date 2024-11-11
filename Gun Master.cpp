#include <iostream>
using namespace std;

int get_item() {
	int temp;
	cin>>temp;
	return temp;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,d,ans = 0;
		cin>>n>>d;
		int i=0;
		while(i<n) {
			for(;i<n && ((get_item()) <= d);i++)
				;
			if (++i<=n)
				ans++;
			for(;i<n && ((get_item()) > d);i++)
				;
			if (++i<=n)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
