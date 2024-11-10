#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<((n%m == 0 && (n/m)%2 == 0)?"YES":"NO")<<"\n";
	}
	return 0;
}
