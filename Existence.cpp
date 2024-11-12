#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		unsigned long long x,y;
		cin>>x>>y;
		cout<<(x*x == 2*y ? "YES" : "NO")<<"\n";
	}
	return 0;
}
