#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp, c = 0;
		for(int i=0;i<3;i++) {
			cin>>temp;
			c += (temp==0);
		}
		cout<<(c>=2?"WATER FILLING TIME":"NOT NOW")<<"\n";
	}
	return 0;
}
