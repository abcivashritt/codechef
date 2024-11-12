#include <iostream>
using namespace std;

int gcd(int n, int d) {
	if(d == 0)
		return n;
	return gcd(d, n%d);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,g;
		cin>>x>>y;
		g = gcd(x,y);
		cout<<(x/g) * (y/g)<<"\n";
	}
}
