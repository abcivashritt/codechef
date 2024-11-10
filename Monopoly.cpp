#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<((d > a+b+c || a > b+c+d || b > c+d+a || c > d+a+b)?"YES":"NO")<<"\n";
	}
	return 0;
}
