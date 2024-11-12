#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,m;
		cin>>a>>b>>c>>m;
		cout<<(min(abs(a-c), min(abs(a-b), abs(b-c))) <= m ? "YES" : "NO")<<"\n";
	}
	return 0;
}
