#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,p;
		cin>>n>>x>>p;
		cout<<(x*3 - n + x < p ? "FAIL" : "PASS")<<"\n";
	}
	return 0;
}
