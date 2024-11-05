#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,y;
		cin>>n>>y;
		int or_value = 0;
		int ai;
		for(int i=0;i<n;i++) {
			cin>>ai;
			or_value = or_value | ai;
		}
		int ans = 0,current = 1;;
		while((or_value > 0 || y > 0) && ans >= 0) {
			if(or_value % 2 == 1 && y % 2 == 0)
				ans = -1;
			else if(or_value % 2 == 0 && y % 2 == 1)
				ans += current;
			or_value /= 2;
			y /= 2;
			current *= 2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
