#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp,ans = 0;
		cin>>n;
		vector < int > s(n);
		for(int i=0;i<n;i++)
			cin>>s[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if (temp == s[i])
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
