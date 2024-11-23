#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		unsigned long long n, ans = 0;
		cin>>n;
		ans = (n/9)*45;
		n %= 9;
		ans += (n*(n+1)/2);
		cout<<ans<<"\n";
	}
	return 0;
}
