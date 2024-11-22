#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, n_copy;
		cin>>n;
		n_copy = n;

		while((n%7)%4 != 0 && n > 0)
			n -= 4;

		cout<<(n >= 0 ? (n/7)*7 : -1)<<"\n";
	}
	return 0;
}
