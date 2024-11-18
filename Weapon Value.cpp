#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0;
		char prev;
		cin>>n;
		vector < string > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<10;i++) {
			prev = a[0][i];
			for(int j=1;j<a.size();j++) {
				if(prev != a[j][i])
					prev = '1';
				else
					prev = '0';
			}
			if(prev == '1')
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
