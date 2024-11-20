#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int x, y, streak = 0, ones = 0, temp, first = -1, last = 0;
		string s;
		cin>>x>>y>>s;

		for(int i=0;i<s.length();i++) {
			if(s[i] == '1') {
				if(first == -1)
					first = i;
				last = i;
				ones++;
			}
			else {
				if(first != -1) {
					streak = max(streak, last - first + 1);
					first = -1;
					last = 0;
				}
			}
		}
		if(first != -1) {
			streak = max(streak, last - first + 1);
			first = -1;
			last = 0;
		}
		cout<<ones*x + streak*y<<"\n";
	}
	return 0;
}
