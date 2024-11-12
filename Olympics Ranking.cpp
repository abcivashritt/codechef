#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp,sum1 = 0, sum2 = 0;
		for(int i=0;i<3;i++) {
			cin>>temp;
			sum1 += temp;
		}
		for(int i=0;i<3;i++) {
			cin>>temp;
			sum2 += temp;
		}
		cout<<(sum1 > sum2 ? 1 : 2)<<"\n";
	}
	return 0;
}
