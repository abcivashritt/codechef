#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		a = a + ((b-a) - (b-a)%3);
		cout<<(b-a <= 1 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
