#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<((max(max(a,b),c) == a)?"YES":"NO")<<"\n";
	return 0;
}
