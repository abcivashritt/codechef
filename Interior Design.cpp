#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(x1+y1 < x2+y2?x1+y1:x2+y2)<<"\n";
	}
	return 0;
}
