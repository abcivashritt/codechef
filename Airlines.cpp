#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,n;
		cin>>x>>n;
		cout<<((max(0, n - x*100) + 99)/100)<<"\n";
	}
	return 0;
}
