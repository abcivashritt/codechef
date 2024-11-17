#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i = 0;
		string s;

		cin>>n>>s;

		while(i<n-1 && s[i] <= s[i+1])
			i++;

		cout<<s.substr(0, i)+s.substr(i, n)<<"\n";
	}
	return 0;
}
