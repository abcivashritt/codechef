#include <iostream>
#include <climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, sum = 0, lowest = INT_MAX;
		bool np = false;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp < 2)
				np = true;
			sum += temp;
			lowest = min(lowest, temp);
		}
		cout<<(np ? -1 : sum - lowest + 2)<<"\n";
	}
	return 0;
}
