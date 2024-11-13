#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int a = 0;
		cin>>s;
		int n = s.length();
		for(int i=0;i<n;i++) {
			if(s[i] == 'a')
				a++;
		}
		cout<<min(a, n - a)<<"\n";
	}
	return 0;
}
