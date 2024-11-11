#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		n = (n/100) + (n%100);
		cout<<(n <= 10 ? n : -1)<<"\n";
	}
	return 0;
}
