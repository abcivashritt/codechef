#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector < int > primes;
	vector < bool > is_prime(100001, true);
	for(long long int i=2;i<100001;i++) {
		if(is_prime[i]) {
			primes.push_back(i);
			for(long long int j=i*i;j<100001;j+=i)
				is_prime[j] = false;
		}
	}
	int t;
	cin>>t;
	while(t--) {
		int m,n;
		cin>>m>>n;
		is_prime.clear();
		is_prime.resize(n-m+2, true);
		for(long long int i=0;i<primes.size();i++) {
			for(long long int j=(((m+primes[i]-1)/primes[i])*primes[i]);j<=n;j+=primes[i]) {
				if(j == primes[i])
					continue;
				is_prime[j-m+1] = false;
			}
		}
		for(int i=max(2, m);i<=n;i++) {
			if(is_prime[i-m+1]) {
				cout<<i<<"\n";
			}
		}
		cout<<"\n";
	}
	return 0;
}
