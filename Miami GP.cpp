#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x*107 >= y*100?"YES":"NO")<<"\n";
	}
	return 0;
}
