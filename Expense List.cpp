#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		cout<<pow(2, x-n)<<"\n";
	}
	return 0;
}
