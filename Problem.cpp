#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<(abs(n-m)%2 ? "NO" : "YES")<<"\n";
	}
	return 0;
}
