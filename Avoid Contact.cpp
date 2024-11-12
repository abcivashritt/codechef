#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<x-y + y*2 - (x == y ? 1 : 0)<<"\n";
	}
	return 0;
}
