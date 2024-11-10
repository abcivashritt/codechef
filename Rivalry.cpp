#include <iostream>
using namespace std;

int main() {
	int r1,r2,d1,d2;
	cin>>r1>>r2>>d1>>d2;
	cout<<(r1+d1 < r2+d2 ? "EVERULE" : "DOMINATER")<<"\n";
	return 0;
}
