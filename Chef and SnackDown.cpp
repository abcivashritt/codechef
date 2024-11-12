#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int year;
		cin>>year;
		cout<<((year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019) ? "HOSTED" : "NOT HOSTED")<<"\n";
	}
	return 0;
}
