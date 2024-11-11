#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		cout<<(a/double(x)  == b/double(y) ? "BOTH" : ( a/double(x) > b/double(y) ? "CHEFINA" : "CHEF"))<<"\n";
	}
	return 0;
}
