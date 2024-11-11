#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a,b;
		cin>>n>>a>>b;
		cout<<((n/2)*a + ((n+1)/2)*b)<<"\n";
	}
	return 0;
}
