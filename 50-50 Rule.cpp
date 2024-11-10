#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<(x<50?"Z":(y<50?"F":"A"))<<"\n";
	}
	return 0;
}
