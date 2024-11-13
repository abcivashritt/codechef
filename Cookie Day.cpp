#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp, lowest = INT_MAX;
		cin>>n>>k;
		while(n--) {
			cin>>temp;
			if(temp >= k)
				lowest = min(lowest, temp%k);
		}
		if(lowest == INT_MAX)
			lowest = -1;
		cout<<lowest<<"\n";
	}
	return 0;
}
