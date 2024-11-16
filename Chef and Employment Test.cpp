#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		vector < int > a(n);

		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		n = (n+k)/2;
		cout<<a[n]<<"\n";
	}
	return 0;
}
