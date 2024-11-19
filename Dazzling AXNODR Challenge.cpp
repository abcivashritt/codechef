#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n;
		cin>>n;
		if(n % 4 == 1)
			cout<<n;
		else if(n % 4 == 2 || n % 4 == 3)
			cout<<3;
		else
			cout<<n+3;
		cout<<"\n";
	}
	return 0;
}
