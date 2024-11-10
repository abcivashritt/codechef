#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	cout<<((x + y*0.5 + 4-(x+y+z)) > (z + y*0.5) ? "YES" : "NO")<<"\n";
	return 0;
}
