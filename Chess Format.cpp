#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<(a+b < 3 ? 1 : (a+b <= 10 ? 2 : (a+b <= 60 ? 3 : 4)))<<"\n";
	}
	return 0;
}
