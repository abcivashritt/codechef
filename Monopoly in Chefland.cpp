#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int r1,r2,r3;
		cin>>r1>>r2>>r3;
		cout<<((r1 > r2+r3 || r2 > r1+r3 || r3 > r1+r2)?"YES":"NO")<<"\n";
	}
	return 0;
}
