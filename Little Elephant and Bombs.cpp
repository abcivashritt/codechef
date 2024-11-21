#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0;
		string s;

		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '0' && (i == 0 || s[i-1] == '0') && (i == n-1 || s[i+1] == '0'))
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
