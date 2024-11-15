#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a,b;
		string s;
		cin>>n>>a>>b>>s;

		cout<<a*count(s.begin(), s.end(), '0') + b*count(s.begin(), s.end(), '1')<<"\n";
	}
	return 0;
}
