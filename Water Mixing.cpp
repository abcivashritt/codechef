#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		cout<<(b-a <= 0 ? (abs(b-a) <= y ? "YES" : "NO") : (abs(b-a) <= x ? "YES" : "NO"))<<"\n";
	}
	return 0;
}
