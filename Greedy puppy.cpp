#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, max_rem = 0;

		cin>>n>>k;
		while(k > 0) {
			max_rem = max(max_rem, n%k);
			k--;
		}
		cout<<max_rem<<"\n";
	}
	return 0;
}
