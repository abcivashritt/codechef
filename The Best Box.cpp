#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int p, s;
		double l, b;
		cin>>p>>s;

		b = (p-sqrt(p*p-24*s))/12.0;
		l = (p-8*b)/4.0;
		cout<<fixed<<setprecision(2)<<l*b*b<<endl;
	}
	return 0;
}
