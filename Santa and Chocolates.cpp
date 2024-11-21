#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, sum = 0, temp;

		cin>>n>>k;
		for(int i=0;i<n;i++) {
			cin>>temp;
			sum += temp;
		}
		cout<<((sum >= n && ((k==0 && sum%n == 0) || (k > 0))) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
