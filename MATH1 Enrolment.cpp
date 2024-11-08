#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<max(0, y-x)<<"\n";
	}
	return 0;
}
