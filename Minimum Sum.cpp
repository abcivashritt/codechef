#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, temp, g;
		cin>>n>>g;
		for(int i=1;i<n;i++) {
			cin>>temp;
			g = gcd(g, temp);
		}
		cout<<g*n<<"\n";
	}
	return 0;
}
