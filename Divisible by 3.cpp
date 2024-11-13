#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<((a%3 == 0 || b%3 == 0) ? 0 : (a%3 == b%3 ? 1 : 2))<<"\n";
	}
	return 0;
}
