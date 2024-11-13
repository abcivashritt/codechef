#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int b;
		cin>>b;
		b = (b-2)/2;
		cout<<(b*(b+1))/2<<"\n";
	}
	return 0;
}
