#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x==y?"ANY":(x>y?"NEW PHONE":"REPAIR"))<<"\n";
	}
	return 0;
}
