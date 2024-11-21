#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, sum = 0, temp;
		bool odd = false, even = false;

		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp % 2)
				odd = true;
			else
				even = true;
			temp = temp>>1;
			sum += temp;
		}
		cout<<(((odd && even) || sum%n) ? "NO" : "YES")<<"\n";

	}
	return 0;
}
