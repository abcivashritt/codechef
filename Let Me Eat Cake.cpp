#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c = 0;
		cin>>a>>b;
		while(a != b) {
			if(a>b) {
				c += ((a+1)/2);
				a -= ((a+1)/2);
			}
			else {
				c += ((b+1)/2);
				b -= ((b+1)/2);
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
