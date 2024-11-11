#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x%5 != 0 ? -1 : x/10 + (x%10)/5)<<"\n";
	}
	return 0;
}
