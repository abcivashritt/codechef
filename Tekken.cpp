#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<(a-max(b,c)+min(b,c) > 0 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
