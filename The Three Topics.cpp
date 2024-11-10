#include <iostream>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	cout<<((a==x || b==x || c==x)?"YES":"NO")<<"\n";
	return 0;
}
