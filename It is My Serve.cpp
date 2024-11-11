#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int p,q;
		cin>>p>>q;
		cout<<(((p+q)/2)%2 ? "BOB" : "ALICE")<<"\n";
	}
	return 0;
}
