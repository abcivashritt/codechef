#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<(n > m ? (n-m) : min(m%n, n-(m%n)))<<"\n";
	}
	return 0;
}
