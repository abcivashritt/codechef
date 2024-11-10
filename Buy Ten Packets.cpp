#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(5*x <= x + 2*y ? 5*x: x + 2*y)<<"\n";
	}
	return 0;
}
