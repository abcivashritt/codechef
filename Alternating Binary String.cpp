#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, flip = 0;
		string s;
		cin>>n>>s;
		for(int i=1;i<n;i++) {
			if(s[i] == s[i-1])
				flip++;
		}
		cout<<flip<<"\n";
	}
	return 0;
}
