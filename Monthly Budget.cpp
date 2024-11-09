#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x>=30*y?"YES":"NO")<<"\n";
	}
	return 0;
}
