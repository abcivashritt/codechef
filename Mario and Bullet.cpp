#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<max(z-((y+x-1)/x))<<"\n";
	}
	return 0;
}
