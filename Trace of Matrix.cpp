#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, sum = 0, max_sum = 0;

		cin>>n;
		vector < vector < int > > a(n, vector < int > (n));

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];

		for(int i=0;i<n;i++) {
			sum = 0;
			for(int j=0, k = i;j < n && k < n;j++,k++) {
				sum += a[k][j];
			}
			max_sum = max(max_sum, sum);
			sum = 0;
			for(int j=0, k = i;j < n && k < n;j++,k++) {
				sum += a[j][k];
			}
			max_sum = max(max_sum, sum);
		}
		cout<<max_sum<<"\n";
	}
	return 0;
}
