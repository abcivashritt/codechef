#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double q,p;
		cin>>q>>p;
		cout<<fixed<<(q<=1000 ? q*p : q*p*0.9)<<"\n";
	}
	return 0;
}
