#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, zero = 0;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '0')
				zero++;
		}
		if(zero >= n-zero)
			cout<<n-zero<<"\n";
		else
			cout<<zero + 1<<"\n";
	}
	return 0;
}
