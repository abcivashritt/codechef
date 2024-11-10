#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int p,l;
		cin>>p>>l;
		cout<<(3*p <= 4*l?"YES":"NO")<<"\n";
	}
	return 0;
}
