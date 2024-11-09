#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(3*x > 2*y?2*y:3*x)<<"\n";
	}
	return 0;
}
