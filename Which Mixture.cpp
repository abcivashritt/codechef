#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<((a>0 && b>0) ? "SOLUTION" : (a == 0 ? "LIQUID" : "SOLID"))<<"\n";
	}
	return 0;
}
