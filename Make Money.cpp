#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,c, sum = 0, temp;
		cin>>n>>x>>c;
		while(n--) {
			cin>>temp;
			sum += temp + max(0, x-temp-c);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
