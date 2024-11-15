#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int i = 0, k = 1, n_copy = n;
		vector < int > ans(n, 0);
		while(i < n-1) {
			ans[i] = k;
			ans[n-1] = k+1;
			k += 2;
			i++;
			n--;
		}
		n = n_copy;
		for(int i=0;i<n;i++) {
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
