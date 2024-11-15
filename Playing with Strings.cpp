#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s, r;
		cin>>n>>s>>r;
		cout<<(((count(s.begin(), s.end(), '1') == count(r.begin(), r.end(), '1')) &&
					(count(s.begin(), s.end(), '0') == count(r.begin(), r.end(), '0'))) ? "YES" : "NO")<<"\n";
	}
	return 0;
}	
