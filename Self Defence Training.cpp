#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp, ans= 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			(temp>=10 && temp<=60)?ans++:ans;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
