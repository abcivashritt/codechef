#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<abs(((x-1)/10) - ((y-1)/10))<<"\n";
	}
	return 0;
}
