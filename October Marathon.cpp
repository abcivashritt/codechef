#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	cout<<(x<3?"GOLD":(x<6?"SILVER":"BRONZE"))<<"\n";
	return 0;
}
