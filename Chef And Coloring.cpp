#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		vector < int > c(3);

		cin>>n>>s;

		c[0] = count(s.begin(), s.end(), 'R');
		c[1] = count(s.begin(), s.end(), 'G');
		c[2] = count(s.begin(), s.end(), 'B');

		sort(c.begin(), c.end());
		cout<<c[0] + c[1]<<"\n";

	}
	return 0;
}
