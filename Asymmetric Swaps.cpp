#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, min_diff = INT_MAX;
		cin>>n;
		vector < int > a(2*n);
		for(int i=0;i<2*n;i++) {
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		for(int i=0;i<=n;i++)
			min_diff = min(min_diff, a[i+n-1] - a[i]);
		cout<<min_diff<<"\n";
	}
	return 0;
}
