#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int x;
		bool found = false;
		cin>>x;
		for (long long i = 1;i<sqrt(x);i++) {
			if((x - 2*i)%(2+i) == 0 && x - 2*i > 0) {
				found = true;
				break;
			}
		}
		cout<<(found ? "YES" : "NO")<<"\n";
	}
	return 0;
}
