#include <iostream>
using namespace std;

int main() {
	int l,b;
	cin>>l>>b;
	cout<<(2*(l+b) == l*b ? "Eq" : (2*(l+b) > l*b ? "Peri" : "Area"))<<"\n";
	cout<<max(2*(l+b), l*b)<<"\n";
	return 0;
}
