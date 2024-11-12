#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,temp;
		cin>>a>>b;
		if(a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		while(a<b) {
			a = a*2;
		}
		cout<<(a == b ? "YES" : "NO")<<"\n";
	}
	return 0;
}
