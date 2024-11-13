#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		unsigned long long int n;
		cin>>n;
		cout<<((n/2) * ((n+1)/2))*2<<"\n";
	}
	return 0;
}
