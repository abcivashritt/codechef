#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<(x - min(x, 2*n-x))<<"\n";
	}
	return 0;
}
