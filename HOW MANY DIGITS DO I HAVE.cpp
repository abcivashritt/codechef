#include <iostream>
using namespace std;

int main() {
	string n;
	cin>>n;
	if(n.length() <= 3)
		cout<<n.length()<<"\n";
	else
		cout<<"More than 3 digits\n";
	return 0;
}
