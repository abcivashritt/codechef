#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 1;
		string s;
		cin>>n>>s;
		for(int i=1;i<n;i++) {
			if(s[i] != s[i-1])
				count++;
		}
		cout<<count/2<<"\n";
	}
	return 0;
}
