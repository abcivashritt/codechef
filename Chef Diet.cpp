#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp,carry = 0, ans = -1;
		cin>>n>>k;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(ans == -1 && temp + carry >= k)
				carry = temp + carry - k;
			else if(ans == -1)
				ans = i + 1;
		}
		if(ans == -1)
			cout<<"YES\n";
		else
			cout<<"NO "<<ans<<"\n";
	}
	return 0;
}
