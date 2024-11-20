#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int	n, a, b, c=0, a_ones = 0, b_ones = 0, total_ones = 0;
		cin>>n>>a>>b;
		while(a > 0) {
			if(a & 1)
				a_ones++;
			a = a>>1;
		}
		while(b > 0) {
			if(b & 1)
				b_ones++;
			b = b>>1;
		}
		total_ones = a_ones + b_ones;
		if(n < total_ones)
			total_ones = n - a_ones + n - b_ones;
		for(int i=0;i<total_ones;i++) {
			c = c<<1;
			c += 1;
		}
		for(int i=total_ones;i<n;i++)
			c = c<<1;
		cout<<c<<"\n";
	}
	return 0;
}
