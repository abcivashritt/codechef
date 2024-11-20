#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, c = 0;
		string s;
		cin>>n>>s;
		c = count(s.begin(), s.end(), '1');
		if((c == 1 && s.length() >= 3) || c == 2 || c == 3)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
