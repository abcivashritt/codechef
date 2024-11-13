#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<(a > 50 ? "A" : (b > 50 ? "B" : (c > 50 ? "C" : "NOTA")))<<"\n";
	}
	return 0;
}
