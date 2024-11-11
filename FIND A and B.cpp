#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		if(x*y%z==0)
			cout<<x*y<<" "<<z;
		else if(x*z%y==0)
			cout<<x*z<<" "<<y;
		else if(z*y%x==0)
			cout<<z*y<<" "<<x;
		else
			cout<<-1;
		cout<<"\n";
	}
	return 0;
}
