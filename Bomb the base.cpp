#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,temp, ans = 0;
		cin>>n>>x;
		for(int i=1;i<=n;i++) {
			cin>>temp;
			if(temp < x)
				ans = i;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
