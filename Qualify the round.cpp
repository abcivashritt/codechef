#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,a,b;
		cin>>x>>a>>b;
		cout<<(a+2*b >= x?"QUALIFY":"NOTQUALIFY")<<"\n";
	}
	return 0;
}
