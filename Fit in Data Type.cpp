#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x;
		cin>>n>>x;
		cout<<(n>=x ? x : x%(n+1))<<"\n";
	}
	return 0;
}
