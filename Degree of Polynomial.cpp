#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp != 0)
				ans = i;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
