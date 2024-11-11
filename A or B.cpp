#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<max(500-2*x + 1000 - 4*(x+y), 1000-4*y + 500 - 2*(x+y))<<"\n";
	}
	return 0;
}
