#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<(((x+y-1)/y)*z)<<"\n";
	}
	return 0;
}
