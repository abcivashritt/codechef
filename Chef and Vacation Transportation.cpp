#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<(x+y < z ? "PLANEBUS" : (x+y > z ? "TRAIN" : "EQUAL"))<<"\n";
	}
	return 0;
}
