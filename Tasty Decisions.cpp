#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(2*x > 5*y?"CHOCOLATE":(2*x < 5*y?"CANDY":"EITHER"))<<"\n";
	}
	return 0;
}
