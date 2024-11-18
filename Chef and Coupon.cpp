#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int d,c, temp, mul = 0, sum;
		cin>>d>>c;
		for(int j=0;j<2;j++) {
			sum = 0;
			for(int i=0;i<3;i++) {
				cin>>temp;
				sum += temp;
			}
			if(sum >= 150)
				mul++;
		}
		cout<<(mul*d <= c ? "NO" : "YES")<<"\n";
	}
	return 0;
}
