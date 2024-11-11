#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp,ans=0;
		cin>>n>>k;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if((k-=temp) >= 0)
				ans = i+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
