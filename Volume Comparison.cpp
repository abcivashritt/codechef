#include <iostream>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	if(a*b*c == x*x*x)
		cout<<"EQUAL";
	else if(a*b*c > x*x*x)
		cout<<"CUBOID";
	else
		cout<<"CUBE";
	cout<<"\n";
	return 0;
}
