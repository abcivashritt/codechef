#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, dist = 0;
		cin>>n;
		vector < pair < int, int > > a(n*n);
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cin>>temp;
				a[temp-1] = pair < int, int > (i, j);
			}
		}
		for(int i=1;i<n*n;i++)
			dist += abs(a[i].first - a[i-1].first) + abs(a[i].second - a[i-1].second);
		cout<<dist<<"\n";
	}
	return 0;
}
