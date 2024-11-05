#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a, b, x;
		cin>>a>>b>>x;
		if (b>a) {
			int temp = b;
			b = a;
			a = temp;
		}
		if (a*b > x*x) {
			if(b <= x*x)
				cout<<"1\n";
			else
				cout<<"2\n";
		}
		else
			cout<<"0\n";

	}
	return 0;
}
