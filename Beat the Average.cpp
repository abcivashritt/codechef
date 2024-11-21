#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m,x;
		cin>>n>>m>>x;
		if(x < m) {
			cout<<x*n/(x+1)<<"\n";
		}
		else
			cout<<0<<"\n";
	}
	return 0;
}
