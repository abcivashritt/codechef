#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			int product = a[i];
			int sum = a[i];
			for(int j=i+1;j<n;j++) {
				product *= a[j];
				sum += a[j];
				if(sum == product)
					ans++;
			}
		}
		cout<<n + ans<<"\n";
	}
	return 0;
}
