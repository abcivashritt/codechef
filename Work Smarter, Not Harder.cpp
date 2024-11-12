#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int l,x,y;
		cin>>l>>x>>y;
		cout<<(l+x-1)/x - ((l+y-1)/y + 1)<<"\n";
	}
	return 0;
}
