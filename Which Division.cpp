#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int r;
		cin>>r;
		cout<<(r<1600 ? 3 : (r < 2000 ? 2 : 1))<<"\n";
	}
	return 0;
}
