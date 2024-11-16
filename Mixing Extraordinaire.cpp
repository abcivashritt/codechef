#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		long long sum = 0;
		cin>>n;
		vector < long long > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				sum += (a[i] * a[j]);
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
