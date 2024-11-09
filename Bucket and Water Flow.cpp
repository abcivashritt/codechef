#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int w,x,y,z;
		cin>>w>>x>>y>>z;
		cout<<(x-w==y*z?"FILLED":(x-w > y*z?"UNFILLED":"OVERFLOW"))<<"\n";
	}
	return 0;
}
