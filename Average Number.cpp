#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,v,ai,a=0;
		cin>>n>>k>>v;
		for(int i=0;i<n;i++) {
			cin>>ai;
			a += ai;
		}
		double x = ((n+k)*v - a)/double(k);
		if (x == int(x) && x>0)
			cout<<int(x)<<"\n";
		else
			cout<<"-1\n";
	}
	return 0;
}
