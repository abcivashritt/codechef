#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 1, max_count = 1;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());

		for(int i=1;i<n;i++) {
			while(i < n && a[i] == a[i-1]) {
				i++;
				count++;
			}
			max_count = max(max_count, count);
			count = 1;
		}
		cout<<(max_count <= (n+1)/2 ? "Yes" : "No")<<"\n";
	}
	return 0;
}
