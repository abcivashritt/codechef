#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n-1)*3 - max(0, (n-2)/2 + (n-2)%2)*3<<"\n";
	}
	return 0;
}
