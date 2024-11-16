#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, sum =0, c;
		cin>>n>>c;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		cout<<(sum <= c ? "Yes" :"No")<<"\n";
	}
	return 0;
}
