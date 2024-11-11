#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,z;
		cin>>x>>y>>z;
		cout<<((z+y-1)/z) * x<<"\n";
	}
	return 0;
}
