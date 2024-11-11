#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector < bool > is_prime(100001, true);
	is_prime[0] = false;
	is_prime[1] = false;
	for(int i=2;i<100001;i++) {
		if(is_prime[i]) {
			for(int j=i+i;j<100001;j+=i)
				is_prime[j] = false;
		}
	}
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(is_prime[n] ? "YES" : "NO")<<"\n";
	}
	return 0;
}
