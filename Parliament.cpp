#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<(x>=(n+1)/2?"YES":"NO")<<"\n";
	}
	return 0;
}
