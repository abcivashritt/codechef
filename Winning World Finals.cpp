#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int m,p;
		cin>>m>>p;
		p += m;
		cout<<min(300-m-1, (1000-p)/21)<<"\n";
	}
	return 0;
}
