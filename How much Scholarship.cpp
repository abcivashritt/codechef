#include <iostream>
using namespace std;

int main() {
	int r;
	cin>>r;
	cout<<(r <= 50 ? 100 : (r <= 100 ? 50 : 0))<<"\n";
	return 0;
}
