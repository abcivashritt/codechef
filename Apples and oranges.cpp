#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(a==0)
		return b;
	else
		return gcd(b%a, a);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<gcd(n,m)<<"\n";
	}
	return 0;
}
