#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,n,sum;
		cin>>x>>y;
		n = sqrt((x-y)*2);
		sum = n*(n+1)/2;
		while(sum < (x-y)) {
			sum += n+1;
			n++;
		}
		cout<<n<<"\n";
	}
	return 0;
}
