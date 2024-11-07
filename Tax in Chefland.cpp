#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<x-(x>100?10:0)<<"\n";
	}
	return 0;
}
