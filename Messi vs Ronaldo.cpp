#include <iostream>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a*2 + b == x*2 + y)
		cout<<"EQUAL";
	else if(a*2 + b > x*2 + y)
		cout<<"MESSI";
	else
		cout<<"RONALDO";
	cout<<"\n";
	return 0;
}
