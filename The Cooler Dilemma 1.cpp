#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,m;
		cin>>x>>y>>m;
		cout<<(x*m < y?"YES":"NO")<<"\n";
	}
	return 0;
}
