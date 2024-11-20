#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, g,temp;
		cin>>n>>g;
		while(--n) {
			cin>>temp;
			g = gcd(g, temp);
		}
		cout<<(g == 1 ? 0 : -1)<<"\n";
	}
	return 0;
}
