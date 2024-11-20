#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int s, n, count = 0;
		cin>>s>>n;
		n -= n%2;
		while(s > 0 && n > 0) {
			count += (s/n);
			s %= n;
			n = s-s%2;
		}
		cout<<count+s<<"\n";
	}
	return 0;
}
