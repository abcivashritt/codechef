#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<((n==1 || n==3 || n==5) ? "NO" : "YES")<<"\n";
	}
	return 0;
}
