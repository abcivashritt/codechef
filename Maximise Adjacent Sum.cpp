#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, sum = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		for(int i=2;i<n;i++) {
			sum += (2*a[i]);
		}
		sum += a[0];
		sum += a[1];
		cout<<sum<<"\n";
	}
	return 0;
}
