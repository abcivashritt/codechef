#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x, y;
		cin>>x>>y;
		y %= 2;
		cout<<((((y && x > 1) || (y == 0)) && x%2 == 0) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
