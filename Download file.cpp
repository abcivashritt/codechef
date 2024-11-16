#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,ti, di, sum = 0;
		cin>>n>>k;
		while(n--) {
			cin>>ti>>di;
			if(ti <= k)
				k -= ti;
			else {
				ti -= k;
				k = 0;
				sum += (ti*di);
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
