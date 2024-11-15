#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<(min(x,y/3) + (x-min(x, y/3))/2 >= n ? "YES" : "NO")<<"\n";
	}
	return 0;
}
