#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int t1,t2,r1,r2;
		cin>>t1>>t2>>r1>>r2;
		cout<<(t1*t1/double(r1*r1*r1) == t2*t2/double(r2*r2*r2) ? "Yes" : "No")<<"\n";
	}
	return 0;
}
