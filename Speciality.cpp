#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<((a>b && a>c)?"SETTER":((b>a && b>c)?"TESTER":"EDITORIALIST"))<<"\n";
	}
	return 0;
}
