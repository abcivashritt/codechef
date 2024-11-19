#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,diff;
		bool rest = true;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());

		diff = a[1] - a[0];
		for(int i=2;i<n;i++) {
			if(!((a[i] - a[i-1]) == 2*diff || (a[i] - a[i-1] == diff/2 && diff%2 == 0)))
				rest = false;
			diff = a[i] - a[i-1];
		}
		cout<<(rest ? "Yes" : "No")<<"\n";
	}
	return 0;
}
