#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<((x%2 == 0?n/2:(n+1)/2)-1)<<"\n";
	}
	return 0;
}
