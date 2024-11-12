#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a > c) {
			int temp = a;
			a = c;
			c = temp;

			temp = b;
			b = d;
			d = temp;
		}
		cout<<max(b,d) - min(a,c) + 1 - max(0 , d-b-1)<<"\n";
	}
	return 0;
}
