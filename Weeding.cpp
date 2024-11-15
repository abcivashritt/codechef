#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,k,a;
		cin>>n>>m>>k;
		while(n--)
			cin>>a;
		cout<<(a+k-1 <= m ? "Yes" : "No")<<"\n";
	}
	return 0;
}
