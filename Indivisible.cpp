#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector < int > primes;
	vector < bool > is_prime(100, true);
	for(int i=2;i<100;i++) {
		if(is_prime[i]) {
			primes.push_back(i);
			for(int j=i+i;j<100;j+=i) {
				is_prime[j] = false;
			}
		}
	}
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		for(int i=0;i<primes.size();i++) {
			if(a % primes[i] != 0 &&
					b % primes[i] != 0 &&
					c % primes[i] != 0) {
				cout<<primes[i]<<"\n";
				break;
			}
		}
	}
	return 0;
}
