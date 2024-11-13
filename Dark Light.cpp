#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		if (k==0)
			cout<<(n%4 == 0 ? "Off" : "On")<<"\n";
		else
			cout<<(n%4 == 0 ? "On" : "Ambiguous")<<"\n";
	}
	return 0;
}
