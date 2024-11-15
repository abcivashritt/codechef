#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,sum = 0,temp;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			sum += temp;
		}
		cout<<((n - sum)%2 == 0 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
