#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<((a==c || b==d)?2:1)<<"\n";
	}
	return 0;
}