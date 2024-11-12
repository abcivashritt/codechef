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
		for(int i=1;i<n;i++) {
			if(a[i] != a[i-1]) {
				a[0] += a[i];
				break;
			}
		}
		cout<<a[0]<<"\n";
	}
	return 0;
}
