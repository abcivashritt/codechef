#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans=8;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(!(temp % 7 == 6 || temp % 7 == 0))
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
