#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,m,d;
		cin>>x>>m>>d;
		cout<<min((m-1)*x, d) + x<<"\n";
	}
	return 0;
}
