#include <iostream>
using namespace std;

int main() {
	int j,s,m;
	cin>>j>>s>>m;
	m -= j;
	cout<<((m/s)%2 ? "Unlucky Chef"  : "Lucky Chef")<<"\n";
	return 0;
}
