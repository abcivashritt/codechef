#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x%14==0?"ALICE":((x%2 == 1 && x%9==0)?"BOB":"CHARLIE"))<<"\n";
	}
	return 0;
}
