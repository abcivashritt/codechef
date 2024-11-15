#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0, root;
		cin>>n;
		while(n > 0) {
			root = sqrt(n);
			n = n-(root*root);
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
