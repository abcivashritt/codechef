#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int h,x;
		cin>>x>>h;
		if(h > 5*x/2) {
			h -= (5*x/2);
			cout<<5 + (h+x-1)/x<<"\n";
		}
		else {
			cout<<(h + x/2 -1)/(x/2)<<"\n";
		}
	}
	return 0;
}
