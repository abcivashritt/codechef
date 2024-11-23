#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n,k;
		cin>>n>>k;
		if(k == 1)
			cout<<(n%2 ? "ODD" : "EVEN")<<"\n";
		else if(k == 2)
			cout<<"ODD\n";
		else
			cout<<"EVEN\n";
	}
	return 0;
}
