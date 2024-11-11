#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int h,x,y;
		cin>>h>>x>>y;
		cout<<(h-y+x-1)/x + 1<<"\n";
	}
	return 0;
}
