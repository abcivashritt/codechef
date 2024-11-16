#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, odd = 0, even = 0, ans = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp % 2)
				odd++;
			else
				even++;
		}
		if(odd > 0) {
			ans = even + 1 + (odd - 1)/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
