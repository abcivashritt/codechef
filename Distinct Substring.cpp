#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k;
		cin>>n>>k;
		cout<<(k * (k+1)/2 + (k-1) <= n ? "YES" : "NO")<<"\n";
	}
	return 0;
}
