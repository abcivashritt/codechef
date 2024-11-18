#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, one = 0, zero = 0;

		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp%2)
				one++;
			else
				zero++;
		}
		cout<<min(one, zero)<<"\n";
	}
	return 0;
}
