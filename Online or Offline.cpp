#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		cout<<(n*90 > m*100 ? "DINING" : (n*90 < m*100 ? "ONLINE" : "EITHER"))<<"\n";
	}
	return 0;
}
