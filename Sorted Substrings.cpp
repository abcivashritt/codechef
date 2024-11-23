#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, one = 0, zero = 0, i = 0;
		string s;
		cin>>n>>s;
		while(i < n) {
			while(i < n && s[i] == '0')
				i++;
			if(i > 0 && i <= n)
				zero++;
			while(i < n && s[i] == '1')
				i++;
			if(i < n)
				one++;
		}
		cout<<min(one, zero)<<"\n";
	}
	return 0;
}
