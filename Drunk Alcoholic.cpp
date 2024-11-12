#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int k;
		cin>>k;
		cout<<(k/2)*2 + (k%2)*3<<"\n";
	}
	return 0;
}
