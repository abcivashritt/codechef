#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, b_sum = 0;
		cin>>n;
		n--;
		vector < int > a(n), sum(n, 0);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum[i] = a[i];
			if(i > 0)
				sum[i] += sum[i-1];
		}
		for(int i=0;i<n;i++) {
			b_sum = max(b_sum, sum[i]);
			b_sum += a[i];
		}
		cout<<b_sum<<"\n";
	}
	return 0;
}
