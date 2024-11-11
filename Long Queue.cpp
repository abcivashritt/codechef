#include <iostream>
#include <vector>
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
		int i;
		for(i=n-2;i>=0 && a[i] <= a[n-1]/2;i--)
			;
		cout<<max(0, i+2)<<"\n";
	}
	return 0;
}
