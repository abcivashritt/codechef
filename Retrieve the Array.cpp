#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n, lowest = 0, sum = 0;

		cin>>n;
		vector < long long > a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum += a[i];
		}

		sum = sum/(n+1);

		for(int i=0;i<n;i++)
			cout<<a[i] - sum<<" ";
		cout<<"\n";
	}
	return 0;
}
