#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x<4?"MILD":(x<7?"MEDIUM":"HOT"))<<"\n";
	}
	return 0;
}
