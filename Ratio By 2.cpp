#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<min(max(0, x-y/2), max(0, y-x/2))<<"\n";
	}
	return 0;
}
