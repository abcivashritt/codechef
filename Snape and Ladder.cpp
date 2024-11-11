#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double b,ls;
		cin>>b>>ls;
		cout<<fixed<<setprecision(6)<<sqrt(ls*ls - b*b)<<" "<<sqrt(b*b + ls*ls)<<"\n";
	}
	return 0;
}
