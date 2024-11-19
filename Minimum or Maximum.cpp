#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, lowest, highest;
		bool possible = true;

		cin>>n>>temp;
		lowest = temp;
		highest = temp;
		for(int i=1;i<n;i++) {
			cin>>temp;
			if(temp > lowest && temp < highest)
				possible = false;
			highest = max(highest, temp);
			lowest = min(lowest, temp);
		}
		cout<<(possible ? "YES" : "NO")<<"\n";
	}
	return 0;
}
