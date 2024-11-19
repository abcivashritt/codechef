#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, sum1 = 0, sum2 = 0;
		bool first = true;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());

		for(int i=0;i<n;i++) {
			if(sum1 <= sum2)
				sum1 += a[i];
			else
				sum2 += a[i];
		}
		cout<<max(sum1, sum2)<<"\n";
	}
	return 0;
}
