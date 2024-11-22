#include <iostream>
#include <climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, lowest = INT_MAX, ai;

		cin>>n;
		while(n--) {
			cin>>ai;
			lowest = min(lowest, ai);
		}
		cout<<lowest<<"\n";
	}
	return 0;
}
