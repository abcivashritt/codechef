#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 1, max_count = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		for(int i=1;i<n;i++) {
			if(a[i] == a[i-1])
				count++;
			else
				count = 1;
			max_count = max(max_count, count);
		}
		cout<<n-max_count<<"\n";
	}
	return 0;
}
