#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int m,n,k;
		cin>>m>>n>>k;
		cout<<(n*k < m ? "YES" : "NO")<<"\n";
	}
	return 0;
}
