#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x, single, multi = 0;
		cin>>n>>x;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		single = *max_element(a.begin(), a.end());
		for(int i=0;i<n;i++) {
			multi += ((a[i] + x - 1)/x);
		}
		cout<<min(single, multi)<<"\n";
	}
	return 0;
}
