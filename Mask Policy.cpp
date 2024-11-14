#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a;
		cin>>n>>a;
		cout<<min(a, n-a)<<"\n";
	}
	return 0;
}
