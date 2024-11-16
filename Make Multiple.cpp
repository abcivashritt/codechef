#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(b-a == 0 || b-a >= a ? "YES" : "NO")<<"\n";
	}
	return 0;
}
