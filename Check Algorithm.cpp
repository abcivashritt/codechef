#include <iostream>
#include <algorithm>
using namespace std;

string stringify(int a) {
	string s = "";
	while(a > 0) {
		s += ((a%10) + '0');
		a /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		int count = 1;
		string s, t = "";
		cin>>s;
		for(int i=1;i < s.length()+1;i++) {
			while(i < s.length() && s[i] == s[i-1]) {
				i++;
				count++;
			}
			t += s[i-1] + stringify(count);	
			count = 1;
		}
		cout<<(s.length() > t.length() ? "YES" : "NO")<<"\n";
	}
	return 0;
}
