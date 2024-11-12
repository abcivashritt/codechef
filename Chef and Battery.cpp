#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0;
		cin>>n;
		if(n<50) {
			ans = (50-n+1)/2;
			n = n + ans*2;
		}
		cout<<ans + abs(50-n)/3 + (abs(50-n)%3)*2<<"\n";
	}
	return 0;
}
