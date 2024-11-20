#include <iostream>
using namespace std;


int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		if(n < 5)
			cout<<0<<" "<<n;
		else
			cout<<1<<" "<<n-1;
		cout<<"\n";
	}
	return 0;
}
