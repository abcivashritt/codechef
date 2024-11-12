#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		cout<<min(min(a[0] - a[n-3], a[1] - a[n-2]), a[2] - a[n-1])<<"\n";
	}
	return 0;
}
