#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(max(0, b+10-a)+2)/3<<"\n";
	}
	return 0;
}
