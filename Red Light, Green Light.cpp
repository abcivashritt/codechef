#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp, ans = 0;
		cin>>n>>k;
		while(n--) {
			cin>>temp;
			if(temp > k)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
