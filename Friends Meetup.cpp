#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1,x2;
		cin>>x1>>x2;
		cout<<(x1 < x2 ? "NO" : "YES")<<"\n";
	}
	return 0;
}
