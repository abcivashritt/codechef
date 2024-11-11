#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<100-(((x+5)/10)*10)<<"\n";
	}
	return 0;
}
