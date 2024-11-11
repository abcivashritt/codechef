#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,d;
		cin>>n>>x>>d;
		cout<<(n/(5*x) + d)<<"\n";
	}
	return 0;
}
