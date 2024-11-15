#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,k;
		cin>>a>>b>>k;
		cout<<max(a,b) - min(a,b) - min(k, abs(a-b))<<"\n";
	}
	return 0;
}
