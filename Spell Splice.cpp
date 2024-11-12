#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,sum = 0;
		cin>>n;
		vector < int > v(n), a(n);
		for(int i=0;i<n;i++)
			cin>>v[i]>>a[i];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(i != j) {
					sum = max(sum, a[i]*v[j] + a[j]*v[i]);
				}
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
