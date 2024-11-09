#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(15*x >= 2*y?"YES":"NO")<<"\n";
	}
	return 0;
}
