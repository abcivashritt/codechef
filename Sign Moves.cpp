#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,pos = 0;
		cin>>n;
		cout<<(n%2 ? "-" : "")<<(n+1)/2<<"\n";
	}
	return 0;
}
