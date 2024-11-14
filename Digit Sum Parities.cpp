#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		if(n%10 == 9) {
			int count = 0;
			int m = n;
			while(m > 0 && m%10 == 9) {
				count++;
				m /= 10;
			}
			cout<<n+1+count%2<<"\n";
		}
		else
			cout<<n+1<<"\n";
	}
	return 0;
}
