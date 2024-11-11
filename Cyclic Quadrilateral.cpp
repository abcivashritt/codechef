#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<((a+c == b+d && a+c == 180) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
