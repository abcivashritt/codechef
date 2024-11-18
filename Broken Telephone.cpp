#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, prev, curr;
		cin>>n;

		vector < int > a(n, 0);
		cin>>prev;
		for(int i=1;i<n;i++) {
			cin>>curr;
			if(prev != curr) {
				a[i-1] = 1;
				a[i] = 1;
			}
			prev = curr;
		}
		cout<<count(a.begin(), a.end(), 1)<<"\n";
	}
	return 0;
}
