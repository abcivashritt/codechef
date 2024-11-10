#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,temp, ans = 0;
		cin>>n>>x;
		while(n--) {
			cin>>temp;
			temp>=x?ans++:ans;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
