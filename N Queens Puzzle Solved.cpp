#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double n;
		cin>>n;
		n = pow(0.143*n, n);
		cout<<(n-int(n) < 0.5 ? floor(n) : ceil(n))<<"\n";
	}
	return 0;
}
