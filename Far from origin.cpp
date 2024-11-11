#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int a = x1 * x1 + y1 * y1;
		int b = x2 * x2 + y2 * y2;
		cout<<(a == b ? "EQUAL" : (a > b ? "ALEX" : "BOB"))<<"\n";
	}
	return 0;
}
