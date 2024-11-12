#include <iostream>
using namespace std;

unsigned long long nCk(int n, int k) {
	if(k == 0)
		return 1;
	unsigned long long ans = 1;
	k = min(k, n-k);
	for(int i=0;i < k;i++) {
		ans *= (n-i);
		ans /= (i+1);
	}
	return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		cout<<nCk(n-1, n-k)<<"\n";
	}
	return 0;
}
