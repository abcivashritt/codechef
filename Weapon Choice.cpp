#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int h,x,y1,y2,k;
		cin>>h>>x>>y1>>y2>>k;
		cout<<min((h+x-1)/x, (h <= k*y1 ? (h+y1-1)/y1 : (k + ((h-k*y1+y2-1)/y2))))<<"\n";
	}
	return 0;
}
