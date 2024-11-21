#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, c = 0;

		cin>>n;
		vector < long long > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());

		for(int i=0;i<n;i++)
			c += abs(i - a[i]);
		cout<<c<<"\n";
	}
	return 0;
}
