#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m, largest = 0, temp;
		cin>>n>>m;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++) {
			cin>>temp;
			largest = max(largest, temp);
		}
		sort(a.end()-largest, a.end());
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
