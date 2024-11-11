#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,a,b,ans = 2;
		cin>>x>>y>>a>>b;
		if(x == a || x == b)
			ans--;
		if(y == a || y == b)
			ans--;
		cout<<ans<<"\n";
	}
	return 0;
}
