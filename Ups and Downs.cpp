#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k = 0;

		cin>>n;
		vector < int > a(n), b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		
		for(int i=0;i<n;i+=2,k++)
			b[i] = a[k]; 
		for(int i=n-1-(n%2);i>=0;i-=2,k++)
			b[i] = a[k]; 
		for(int i = 0;i<n;i++) {
			cout<<b[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
