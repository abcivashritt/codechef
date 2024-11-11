#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,m;
		cin>>n>>k>>m;
		cout<<((n+k*m-1)/(k*m))<<"\n";
	}
	return 0;
}
