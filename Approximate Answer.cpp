#include <iostream>
using namespace std;

int main() {
	int x,y,k;
	cin>>x>>y>>k;
	cout<<((abs(x-y)<=k)?"YES":"NO")<<"\n";
	return 0;
}
