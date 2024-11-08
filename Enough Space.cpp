#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<(n>=(x + 2*y)?"YES":"NO")<<"\n";
	}
	return 0;
}
