#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<(y==0 || (y%x == 0 && y/x <= n) ? "YES":"NO")<<"\n";
	}
	return 0;
}
