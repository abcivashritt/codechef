#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int p1,p2,k;
		cin>>p1>>p2>>k;
		cout<<((p1+p2)/k%2 ? "COOK" : "CHEF")<<"\n";
	}
	return 0;
}
