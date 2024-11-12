#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<(x <= y*(n+1) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
