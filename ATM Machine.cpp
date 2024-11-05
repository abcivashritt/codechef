#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int a;
		while(n--) {
			cin>>a;
			if (a<=k) {
				k -= a;
				cout<<"1";
			}
			else
				cout<<"0";
		}
		cout<<"\n";
	}
	return 0;
}
