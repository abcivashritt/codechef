#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	cout<<min(2*x + 3*y, 2*z + y)<<"\n";
	return 0;
}
