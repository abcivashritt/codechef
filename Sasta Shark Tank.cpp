#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(a*10 == b*5 ? "ANY" : (a*10 > b*5 ? "FIRST" : "SECOND"))<<"\n";
	}
	return 0;
}
