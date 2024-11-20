#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,q, prev = 0, curr;
		long long travel = 0;
		cin>>n>>q;

		for(int i=0;i<2*q;i++) {
			cin>>curr;
			travel += abs(prev - curr);
			prev = curr;
		}
		cout<<travel<<"\n";
	}
	return 0;
}
