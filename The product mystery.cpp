#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(a == 0)
		return b;
	else
		return gcd(b%a, a);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int b,c;
		cin>>b>>c;
		cout<<c/gcd(b,c)<<"\n";
	}
	return 0;
}
