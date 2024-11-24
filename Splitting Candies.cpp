#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, k;
		cin>>n>>k;
		if(k == 0)
			cout<<0<<" "<<n<<"\n";
		else
			cout<<n/k<<" "<<n%k<<"\n";
	}
	return 0;
}
