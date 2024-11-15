#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		if(n%2)
			cout<<n/2<<" "<<n/2<<" "<<1<<"\n";
		else if((n-3)/2%2 == 0)
			cout<<1+(n-3)%2<<" "<<1+(n-3)/2<<" "<<1+(n-3)/2<<"\n";
		else
			cout<<3+(n-5)%2<<" "<<1+(n-5)/2<<" "<<1+(n-5)/2<<"\n";
	}
	return 0;
}
