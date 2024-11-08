#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x<=70?0:(x<=100?500:2000))<<"\n";
	}
	return 0;
}
