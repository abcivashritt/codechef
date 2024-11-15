#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int g;
		cin>>g;
		while(g--) {
			int i, n ,q;
			cin>>i>>n>>q;
			cout<<(i == q ? n/2 : (n+1)/2)<<"\n";
		}
	}
	return 0;
}
