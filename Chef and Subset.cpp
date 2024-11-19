#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		bool present = false;
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		if(a == 0 ||
				b == 0 ||
				c == 0 ||
				d == 0 ||
				a + b == 0 ||
				b + c == 0 ||
				c + d == 0 ||
				a + c == 0 ||
				a + d == 0 ||
				b + d == 0 ||
				a + b + c == 0 ||
				b + c + d == 0 ||
				a + c + d == 0 ||
				a + b + d == 0 ||
				a + b + c + d == 0)
				present = true;

		cout<<(present ? "Yes" : "No")<<"\n";
	}
	return 0;
}
