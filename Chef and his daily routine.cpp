#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, i = 0;
		string s;
		
		cin>>s;
		n = s.length();

		while(i < n && s[i] == 'C')
			i++;
		while(i < n && s[i] == 'E')
			i++;
		while(i < n && s[i] == 'S')
			i++;
		cout<<(i == n ? "yes" : "no")<<"\n";
	}
	return 0;
}
