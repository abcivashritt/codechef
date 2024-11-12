#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,m;
		cin>>a>>b>>m;
		cout<<min(abs(a-b),m-abs(a-b))<<"\n";
	}
	return 0;
}
