#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, x, extra = 0, c = 0;

		cin>>n>>x;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());

		for(int i=0;i<n;i++) {
			if(a[i] < x) {
				if(extra >= (x - a[i])) {
					extra -= (x - a[i]);
					c++;
				}
			}
			else {
				extra += (a[i] - x);
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
