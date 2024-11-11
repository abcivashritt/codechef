#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<max(x,y)*2 - 1<<"\n";
	}
	return 0;
}
