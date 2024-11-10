#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<max(x/10, 100)<<"\n";
	}
	return 0;
}
