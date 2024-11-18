#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i = 0;
		string s;
		cin>>n>>s;
		while(i < n && s[i] == '1')
			i++;
		cout<<i<<"\n";
	}
	return 0;
}
