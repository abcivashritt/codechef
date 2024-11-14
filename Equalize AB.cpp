#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,x;
		cin>>a>>b>>x;
		cout<<(abs(a-b)%(2*x) == 0 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
