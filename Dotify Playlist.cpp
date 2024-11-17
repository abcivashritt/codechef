#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k, l, mi, li, length = 0;
		cin>>n>>k>>l;
		vector < pair < int, int > > a(n);
		

		for(int i=0;i<n;i++) {
			cin>>mi>>li;
			a[i] = pair < int, int > (mi, li);
		}
		sort(a.rbegin(), a.rend());

		for(int i=0;i<n && k>0;i++) {
			if(a[i].second == l) {
				k--;
				length += a[i].first;
			}
		}
		cout<<(k == 0 ? length : -1)<<"\n";
	}
	return 0;
}
