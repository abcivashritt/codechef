#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<((max(0,n-x) + 3)/4)<<"\n";
	}
	return 0;
}
