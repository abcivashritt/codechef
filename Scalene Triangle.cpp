#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<((a!=b && b!=c && a!=c)?"YES":"NO")<<"\n";
	}
	return 0;
}