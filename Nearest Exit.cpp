#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n <= 50 ? "LEFT" : "RIGHT")<<"\n";
	}
	return 0;
}
