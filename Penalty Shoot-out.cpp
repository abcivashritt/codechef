#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(max(x,y) <= min(x+2, y+1) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
