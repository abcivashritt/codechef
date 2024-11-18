#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, max_weight = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		sort(a.rbegin(), a.rend());

		for(int i=0;i<n;i++)
			max_weight = max(max_weight, a[i] * (i+1));
		cout<<max_weight<<"\n";
	}
	return 0;
}
