#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int count = 0, i = 0, n;
		string s;
		
		cin>>s;

		n = s.length();
		while(i < n) {
			while(i < n && s[i] == '0')
				i++;
			if(i < n)
				count++;
			while(i < n && s[i] == '1')
				i++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
