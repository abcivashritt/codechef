#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string a,b;
		cin>>a>>b;
		cout<<(max(a[0], a[1]) > min(b[0], b[1]) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
