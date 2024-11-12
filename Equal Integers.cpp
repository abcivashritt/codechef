#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		if(x < y)
			cout<<y-x<<"\n";
		else
			cout<<(x-y+1)/2 + (x-y)%2<<"\n";
	}
	return 0;
}
