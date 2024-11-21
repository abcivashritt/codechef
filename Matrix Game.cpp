#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m,c = 0, g = 0;

		cin>>n>>m;
		vector < int > a(n*m, 0);

		for(int i=0;i<n*m;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		
		for(int i=0;i<n*m;i+=2) {
			c += a[i];
			if(i+1 < n*m)
				g  += a[i+1];
		}
		cout<<(c > g ? "Cyborg" : ( c < g ? "Geno" : "Draw"))<<"\n";
	}
	return 0;
}
