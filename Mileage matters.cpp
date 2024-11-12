#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double n,x,y,a,b;
		cin>>n>>x>>y>>a>>b;
		cout<<(n*x/a == n*y/b ? "ANY" : (n*x/a > n*y/b ? "DIESEL" : "PETROL"))<<"\n";
	}
	return 0;
}
