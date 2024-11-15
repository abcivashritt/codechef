#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,one, zero;
		string s;

		cin>>n>>s;

		one = count(s.begin(), s.end(), '1');
		zero = count(s.begin(), s.end(), '0');

		cout<<2*min(one, zero) + (abs(one - zero) > 0 ? 1 : 0)<<"\n";
	}	
	return 0;
}
