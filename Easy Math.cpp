#include <iostream>
#include <vector>
using namespace std;

int main() {
	auto val = [](int a) {
		int res = 0;
		while(a > 0) {
			res += a%10;
			a /= 10;
		}
		return res;
	};
	int t;
	cin>>t;
	while(t--) {
		int n, temp, ans = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				ans = max(ans, val(a[i] * a[j]));
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
