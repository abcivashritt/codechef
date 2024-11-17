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
		int x,y,g;
		cin>>x>>y;
		cout<<((2*(x+1) % 4 || 2*(y+1)%4) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
