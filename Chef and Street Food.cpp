#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, si, vi, pi, profit = 0;

		cin>>n;
		while(n--) {
			cin>>si>>pi>>vi;
			profit = max(profit, (pi/(si+1))*vi);
		}
		cout<<profit<<"\n";
	}
	return 0;
}
