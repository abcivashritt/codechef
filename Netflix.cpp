#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,x;
		cin>>a>>b>>c>>x;
		cout<<((a+b >= x || b+c >= x || a+c >= x)?"YES":"NO")<<"\n";
	}
	return 0;
}
