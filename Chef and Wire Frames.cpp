#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long n,m,x;
		cin>>n>>m>>x;
		cout<<(2*n + 2*m)*x<<"\n";
	}
	return 0;
}
