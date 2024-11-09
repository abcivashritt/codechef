#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(y*2 >= x?"YES":"NO")<<"\n";
	}
	return 0;
}
