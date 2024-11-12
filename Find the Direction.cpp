#include <iostream>
using namespace std;

int main() {
	string dir[] = {"NORTH", "EAST", "SOUTH", "WEST"};
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<dir[x%4]<<"\n";
	}
	return 0;
}
