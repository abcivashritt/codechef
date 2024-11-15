#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int l,k;
		cin>>l>>k;
		cout<<(l%k ? 1 : 0)<<"\n";
	}
	return 0;
}
