#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<((x==1 || x%2==0)?"YES":"NO")<<"\n";
	}
	return 0;
}
