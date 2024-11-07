#include <iostream>
using namespace std;

int main() {
	int n,m;
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		cout<<max(0, n-m)<<"\n";
	}
	return 0;
}
