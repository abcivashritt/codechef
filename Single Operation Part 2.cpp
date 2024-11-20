#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0;
		string s;
		cin>>n>>s;
		int i = 1;
		while(i < n  && s[i] == '0')
			i++;
		cout<<i<<"\n";
	}
	return 0;
}
