#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<((z%x == 0 && z%y == 0) ? "ANY" : (z%x == 0 ? "CHICKEN" : (z%y == 0 ? "DUCK" : "NONE")))<<"\n";
	}
	return 0;
}
