#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(((a%2 && b%2) || (min(a,b) == 1)) ? "No" : "Yes")<<"\n";
	}
	return 0;
}
