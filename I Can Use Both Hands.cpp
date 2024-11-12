#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int l,r,m;
		cin>>l>>r>>m;
		cout<<(l+m-1)/l + m/r<<"\n";
	}
	return 0;
}
