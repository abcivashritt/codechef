#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		bool ans = true;
		for(int i=1;i<=n;i++) {
			if(i < a[i-1])
				ans = false;
		}
		if (ans)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
