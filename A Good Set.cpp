#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, last = 500;
		cin>>n;
		while(n--) {
			cout<<last<<" ";
			last--;
		}
		cout<<"\n";
	}
	return 0;
}
