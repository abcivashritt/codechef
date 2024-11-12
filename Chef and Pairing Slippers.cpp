#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int l,n,x;
		cin>>n>>l>>x;
		cout<<min(l, n-l)*x<<"\n";
	}
	return 0;
}
