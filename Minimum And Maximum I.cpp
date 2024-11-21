#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, diff = 0;
		cin>>n;
		if(n%2)
			diff += (n+1)/2;
		n = (n+1)/2;
		n = n*(n+1)-diff;
		cout<<n<<"\n";
	}
	return 0;
}
