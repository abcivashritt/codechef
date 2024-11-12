#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(10*(y-x) + 100 - y - 1)/(100 - y)<<"\n";
	}
	return 0;
}
