#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,x,b,y;
		cin>>a>>x>>b>>y;
		cout<<(a/double(x) > b/double(y) ? "ALICE" : (a/double(x) < b/double(y) ? "BOB" : "EQUAL"))<<"\n";
	}
	return 0;
}
