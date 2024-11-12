#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1,x2,x3;
		double v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		v1 = abs(x1-x3)/v1;
		v2 = abs(x2-x3)/v2;
		cout<<(v1 == v2 ? "DRAW" : (v1 < v2 ? "CHEF" : "KEFA"))<<"\n";
	}
	return 0;
}
