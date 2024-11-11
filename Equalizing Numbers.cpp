#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(abs(a-b)%2 ? "NO" : "YES")<<"\n";
	}
	return 0;
}
