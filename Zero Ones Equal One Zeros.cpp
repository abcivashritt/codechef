#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		n -= 3;
		cout<< ("10" + string(n, '0') + "1")<<"\n";
	}
	return 0;
}
