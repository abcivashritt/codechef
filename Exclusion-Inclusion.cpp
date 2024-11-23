#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, sum = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum += a[i];
		}
		sort(a.begin(), a.end());
		cout<<sum<<" ";
		for(int i=0;i<n-1;i++) {
			sum -= a[i];
			cout<<sum<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
