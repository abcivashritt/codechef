#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,c,q,l,r;

		cin>>n>>c>>q;
		while(q--) {
			cin>>l>>r;
			if(c >= l && c <= r) {
				if(l-c < r-c)
					c = r - c + l;
				else if(l-c > r-c)
					c = c - r + l;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
