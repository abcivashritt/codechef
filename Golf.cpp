#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,x,k;
		cin>>n>>x>>k;
		cout<<((x%k == 0 || (n+1-x)%k == 0) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
