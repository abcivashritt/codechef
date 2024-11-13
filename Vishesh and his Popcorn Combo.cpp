#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp1, temp2, ans = 0;
		for(int i=0;i<3;i++) {
			cin>>temp1>>temp2;
			ans = max(ans, temp1 + temp2);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
