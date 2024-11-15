#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, diff = INT_MAX;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		for(int i=1;i<n;i++)
			diff = min(diff, abs(a[i] - a[i-1]));
		cout<<diff<<"\n";
	}
	return 0;
}
