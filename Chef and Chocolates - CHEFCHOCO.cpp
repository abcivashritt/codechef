#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,c;
		cin>>c>>x>>y;
		cout<<((c-x)*y)<<"\n";
	}
	return 0;
}
