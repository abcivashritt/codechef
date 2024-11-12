#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x%10 == 0? 0 : (x%5 == 0 ? 1 : -1))<<"\n";
	}
	return 0;
}
