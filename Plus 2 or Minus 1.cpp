#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<max(1, x*3)<<"\n";
	}
	return 0;
}
