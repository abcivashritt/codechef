#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		cin>>n>>x>>y;
		cout<<max(n*x, y*(n/2) + x*(n%2))<<"\n";
	}
	return 0;
}
