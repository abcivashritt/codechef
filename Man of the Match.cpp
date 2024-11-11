#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int runs, wk, highest = 0, ans;
		for(int i=0;i<22;i++) {
			cin>>runs>>wk;
			if(highest < runs + 20*wk) {
				highest = runs + 20*wk;
				ans = i+1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
