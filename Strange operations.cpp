#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k, temp, sum = 0;
		cin>>n>>k;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		cout<<((sum % 2 == 0 && k == 1) ? "odd" : "even")<<"\n";
	}
	return 0;
}
