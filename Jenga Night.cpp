#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,n;
		cin>>n>>x;
		cout<<(x%n == 0?"YES":"NO")<<"\n";
	}
	return 0;
}
