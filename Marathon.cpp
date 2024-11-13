#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		d = D*d;
		cout<<(d<10 ? 0 : (d<21 ? a : (d<42 ? b : c)))<<"\n";
	}
	return 0;
}
