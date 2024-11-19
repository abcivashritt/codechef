#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m,k,x;
		cin>>n>>m>>k>>x;
		x--;
		x = x % (k*n+m);
		cout<<(x >= (k-1)*n ? "YES" : "NO")<<"\n";
	}
	return 0;
}
