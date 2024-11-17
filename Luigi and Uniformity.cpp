#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if(a == 0)
		return b;
	else
		return gcd(b%a, a);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count = 0, g;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		g = a[0];
		for(int i=1;i<n;i++)
			g = gcd(g, a[i]);

		for(int i=0;i<n;i++) {
			if(g != a[i])
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
