#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,k;
		cin>>x>>y>>k;
		cout<<((abs(x)%k || abs(y)%k) ? "NO" : "YES")<<"\n";
	}
	return 0;
}
