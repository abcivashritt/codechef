#include <iostream>
using namespace std;

#define MOD 998244353

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long int n, sum = 0, temp;
		cin>>n;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		sum %= MOD;
		sum = sum * (sum - 1) % MOD;
		cout<<sum<<"\n";
	}
	return 0;
}
