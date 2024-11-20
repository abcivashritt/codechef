#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, sum = 0, l, k;
		cin>>n>>k>>l;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		while(l <= n) {
			sum += a[l-1];
			l += k;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
