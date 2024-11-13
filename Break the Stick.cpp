#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x;
		cin>>n>>x;
		cout<<((n%2 == 0 || n%2 == x%2) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
