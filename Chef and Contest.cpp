#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,p,q;
		cin>>x>>y>>p>>q;
		cout<<(x + p*10 == y + q*10 ? "DRAW" : (x + p*10 < y + q*10 ? "CHEF" : "CHEFINA"))<<"\n";
	}
	return 0;
}
