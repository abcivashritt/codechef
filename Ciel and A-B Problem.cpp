#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	a = a-b;
	if(a % 10 == 0 || a % 10 == 1)
		a++;
	else
		a--;
	cout<<a<<"\n";
	return 0;
}
