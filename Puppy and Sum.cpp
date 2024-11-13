#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,d;
		cin>>d>>n;
		while(d--) {
			n = (n*(n+1)/2);
		}
		cout<<n<<"\n";
	}
	return 0;
}
