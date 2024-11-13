#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,temp, ans = 0, count = 0;
		cin>>n>>m;
		while(n--) {
			cin>>temp;
			count += temp;
			if(count >= m) {
				ans++;
				count = 0;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
