#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char a,b,c,p1,p2;
		cin>>a>>b>>c>>p1>>p2;
		if(a==p1 || a==p2)
			cout<<a<<"\n";
		else if(b==p1 || b==p2)
			cout<<b<<"\n";
		else
			cout<<c<<"\n";
	}
	return 0;
}
