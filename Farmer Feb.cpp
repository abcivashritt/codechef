#include <iostream>
#include <vector>
using namespace std;

#define LAST 10001

int main() {
	vector < int > primes;
	vector < bool > is_prime(LAST, true);
	for(int i=2;i<LAST;i++) {
		if(is_prime[i]) {
			primes.push_back(i);
			for(int j=i*i;j<LAST;j+=i) {
				is_prime[j] = false;
			}
		}
	}

	int t;
	cin>>t;
	while(t--) {
		int x,y,sum;
		cin>>x>>y;
		sum = x+y;

		int left = 0, right = primes.size() - 1;
		while(left < right) {
			int mid = (left + right) / 2;
			if(sum < primes[mid])
				right = mid - 1;
			else if(sum > primes[mid])
				left = mid + 1;
			else {
				left = mid;
				right = mid;
				break;
			}
		}
		cout<<(primes[right] <= sum ? primes[right+1]  : primes[right]) - sum<<"\n";	
	}
	return 0;
}
