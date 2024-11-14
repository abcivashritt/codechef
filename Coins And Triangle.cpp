#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n;
		x = sqrt(2*n) - 1;
		while((x+1) * (x+1) + (x+1) <= 2*n)
			x++;
		cout<<x<<"\n";
	}
	return 0;
}
