#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<((a+b+c == 1 || a+b+c == 2) ? 1 : 0)<<"\n";
	}
}
