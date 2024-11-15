#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,sum=0;
		cin>>n>>k;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		for(int i=0;i<k;i++)
			a[i] = max(a[i], 7-a[i]);
		for(int i=0;i<n;i++)
			sum += a[i];
		cout<<sum<<"\n";
	}
	return 0;
}
