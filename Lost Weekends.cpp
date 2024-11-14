#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp, n=0, p;
		for(int i=0;i<5;i++) {
			cin>>temp;
			n += temp;
		}
		cin>>p;
		n *= p;
		cout<<((n+23)/24 > 5 ? "Yes" : "No")<<"\n";
	}
	return 0;
}
