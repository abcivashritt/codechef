#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, num = 5, ans = 0;
		cin>>n;
		while(n >= num) {
			ans = ans + (n/num);
			num *= 5;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
