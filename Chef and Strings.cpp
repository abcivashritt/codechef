#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, prev, sum = 0;
		cin>>n>>prev;
		while(--n) {
			cin>>temp;
			sum += abs(prev - temp) - 1;
			prev = temp;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
