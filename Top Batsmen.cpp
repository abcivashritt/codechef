#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nCk(int n, int k) {
	if(n <= k)
		return 1;
	k = min(k, n-k);
	int ret = 1;
	for(int i=0;i<k;i++, n--)
		ret *= n;
	for(int i=1;i<=k;i++)
		ret /= i;
	return ret;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int k, c = 0;
		vector < int > a(11);
		for(int i=0;i<11;i++)
			cin>>a[i];
		cin>>k;
		sort(a.rbegin(), a.rend());
		while(c < 11 && a[c] > a[k-1])
			c++;
		cout<<nCk(count(a.begin(), a.end(), a[k-1]), k - c)<<"\n";
	}
	return 0;
}
