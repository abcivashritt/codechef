#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,k,ans = 0;
		cin>>n>>k;
		while(n--) {
			cin>>temp;
			if((temp += k)%7 == 0)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
