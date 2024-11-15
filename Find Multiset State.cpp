#include <iostream>
#include <vector>
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
		int i=0;
		for(;i<k;i++) {
			sum += a[i];
		}
		a[n-1] += sum;
		for(;i<n;i++) {
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
