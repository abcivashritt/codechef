#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x*100 < y*10?"DISPOSABLE":"CLOTH")<<"\n";
	}
	return 0;
}
