#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 1, max_count = 1, min_count = INT_MAX;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i = 1;i<n;i++) {
			while(i < n && a[i-1] + 2 >= a[i]) {
				count++;
				i++;
			}
			max_count = max(count, max_count);
			min_count = min(count, min_count);
			count = 1;
		}
		cout<<min_count<<" "<<max_count<<"\n";
	}
	return 0;
}
