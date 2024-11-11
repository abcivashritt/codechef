#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		while(y--) {
			x = max(x+1000, 2*x);
		}
		cout<<x<<"\n";
	}
	return 0;
}
