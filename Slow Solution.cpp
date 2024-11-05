#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int maxt, maxn, sumn;
		cin>>maxt>>maxn>>sumn;
		int ans = 0;
		while(maxt-- && sumn) {
			int num = min(maxn, sumn);
			ans = ans + num*num;
			sumn -= num;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
