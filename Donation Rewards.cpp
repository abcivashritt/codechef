#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x<=3?"BRONZE":(x<=6?"SILVER":"GOLD"))<<"\n";
	}
	return 0;
}
