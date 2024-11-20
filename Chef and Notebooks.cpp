#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		cin.tie(0);
		int x,y,k,n,pi,ci;
		bool lucky = false;

		cin>>x>>y>>k>>n;
		x -= y;
		while(n--) {
			cin>>pi>>ci;
			if(x <= pi && ci <= k)
				lucky = true;
		}
		cout<<(lucky ? "LuckyChef" : "UnluckyChef")<<"\n";
	}
	return 0;
}
