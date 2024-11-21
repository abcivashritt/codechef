#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0;
		long long int m;
		cin>>n>>m;
		vector < long long > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());

		int i = 0;
		while(i < n && m > 0) {
			m -= a[i];
			i++;
			count++;
		}
		cout<<(m <= 0 ? count : -1)<<"\n";
	}
	return 0;
}
