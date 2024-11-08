#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int g,b;
		cin>>g>>b;
		cout<<max(0, b-min(g,b))<<"\n";
	}
	return 0;
}
