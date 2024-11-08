#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<max(300, x)*10<<"\n";
	}
	return 0;
}
