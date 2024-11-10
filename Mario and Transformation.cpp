#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n%3 == 0 ? "NORMAL" : (n%3 == 1 ? "HUGE" : "SMALL"))<<"\n";
	}
	return 0;
}
