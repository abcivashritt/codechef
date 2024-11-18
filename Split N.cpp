#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 0;
		cin>>n;
		while(n > 1) {
			if(n&1)
				count++;
			n = n>>1;
		}
		cout<<count<<"\n";
	}
	return 0;
}
