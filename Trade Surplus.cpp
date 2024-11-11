#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a1,a2,b1,b2;
		cin>>a1>>a2>>b1>>b2;
		cout<<(a2 + b2 > a1 + b1 ? "YES":"NO")<<"\n";
	}
	return 0;
}
