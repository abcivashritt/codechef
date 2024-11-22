#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, max_diff = 0, sum = 0;
		
		cin>>n>>k;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			int p = 0, s = 0, org = 0;
			if(i-1 >= 0) {
				p = abs(1 - a[i-1]);
				s = abs(k - a[i-1]);
				org = abs(a[i] - a[i-1]);
			}
			if(i+1 < n) {
				sum += abs(a[i] - a[i+1]);
				p += abs(1 - a[i+1]);
				s += abs(k - a[i+1]);
				org += abs(a[i] - a[i+1]);
			}
			p = max(0, max(p, s)-org);
			max_diff = max(max_diff, p);
		}
		cout<<sum + max_diff<<"\n";
	}
	return 0;
}
