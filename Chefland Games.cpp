#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int r1,r2,r3,r4;
		cin>>r1>>r2>>r3>>r4;
		cout<<((r1==r2 && r2==r3 && r3==r4 && r1 == 0)?"IN":"OUT")<<"\n";
	}
	return 0;
}
