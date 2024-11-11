#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,k;
		cin>>a>>b>>k;
		cout<<(abs(b-a)+k-1)/k<<"\n";
	}
	return 0;
}
