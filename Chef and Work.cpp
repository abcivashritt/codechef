#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,count = 0,k_copy;
		
		cin>>n>>k;
		vector < int > a(n);		
		for(int i=0;i<n;i++)
			cin>>a[i];

		k_copy = k-a[0];
		count = 1;
		for(int i=1;i<n && k_copy >= 0;i++) {
			while(i < n && k_copy - a[i] >= 0) {
				k_copy -= a[i];
				i++;
			}
			if(i < n) {
				count++;
				k_copy = k-a[i];
			}
		}
		cout<<(k_copy < 0 ? -1 : count)<<"\n";
	}
	return 0;
}
