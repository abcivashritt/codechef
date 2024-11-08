#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x==y?"NEUTRAL":(x>y?"LOSS":"PROFIT"))<<"\n";
	}
	return 0;
}
