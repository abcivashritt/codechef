#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,p,q,r;
		cin>>p>>q>>r>>a>>b>>c;
		cout<<(p+q+r+max(a-p,max(b-q, c-r)) > (a+b+c)/2 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
