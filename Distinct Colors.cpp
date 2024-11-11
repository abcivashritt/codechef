#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, maximum = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			maximum = max(maximum, temp);
		}
		cout<<maximum<<"\n";
	}
	return 0;
}
