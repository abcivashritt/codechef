#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(100 - a == 200 - 2*b?"BOTH":(100 - a > 200 - 2*b?"SECOND":"FIRST"))<<"\n";
	}
	return 0;
}
