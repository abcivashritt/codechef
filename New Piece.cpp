#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,p,q;
		cin>>a>>b>>p>>q;

		if(a==p && b==q)
			cout<<"0";
		else if((a%2 == b%2 && p%2 == q%2) ||
				(a%2 != b%2 && p%2 != q%2))
			cout<<"2";
		else
			cout<<"1";
		cout<<"\n";
	}
	return 0;
}
