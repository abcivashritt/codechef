#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<((n*x >= 10000 && n*x <= 99999)?"YES":"NO")<<"\n";
	}
	return 0;
}
