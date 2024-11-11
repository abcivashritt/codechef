#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b;
		cout<<((c=21-a-b) <= 10?c:-1)<<"\n";
	}
	return 0;
}
