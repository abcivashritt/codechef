#include <iostream>
using namespace std;

int main() {
	long long a;
	cin>>a;
	cout<<((a%6 == 0 || a%6 == 1 || a%6 == 3) ? "yes" : "no")<<"\n";
	return 0;
}
