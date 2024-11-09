#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x>y?"SECOND":(x==y?"ANY":"FIRST"))<<"\n";
	}
	return 0;
}
