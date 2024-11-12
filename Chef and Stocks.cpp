#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,lowest = INT_MAX,sum = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			lowest = min(lowest, temp);
			sum += temp;
		}
		sum -= lowest;
		cout<<sum<<"\n";
	}
	return 0;
}
