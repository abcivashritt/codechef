#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n%3 == 0?"YES":"NO")<<"\n";
	}
	return 0;
}
