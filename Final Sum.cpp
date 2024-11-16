#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,q,sum = 0,temp, a,b;
		cin>>n>>q;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		while(q--) {
			cin>>a>>b;
			sum += abs(a-b+1)%2;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
