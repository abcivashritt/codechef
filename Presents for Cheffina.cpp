#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n/5)*4 + n%5<<"\n";
	}
	return 0;
}
