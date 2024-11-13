#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,s,j,ans=0;
		cin>>n;
		while(n--) {
			cin>>s>>j;
			if(j-s > 5)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
