#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<(x+y <= z?2:x<=z?1:0)<<"\n";
	}
	return 0;
}
