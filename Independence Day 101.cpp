#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		vector < int > a(3);
		for(int i=0;i<3;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		a[1] -= a[0];
		a[2] -= a[0];
		a[2] = a[2] - a[1] - a[0];
		cout<<(a[2] <= 1 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
