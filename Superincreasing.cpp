#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector < unsigned long long > ele(200006, 0);
	ele[0] = 1;
	ele[1] = 2;
	unsigned long long sum = 3;
	for(int i=2;i<200006;i++) {
		ele[i] = sum + 1;
		sum += ele[i];
		if(ele[i] == 0)
			ele[i] = ele[i-1];
	}
	while(t--) {
		int n,k,x;
		cin>>n>>k>>x;
		k--;
		if(ele[k] <= x)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
