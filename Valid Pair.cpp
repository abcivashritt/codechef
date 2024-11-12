#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<((a == b || a == c || b == c) ? "YES" : "NO")<<"\n";
	return 0;
}
