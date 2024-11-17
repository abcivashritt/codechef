#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long x,y,r,n;
		cin>>x>>y>>n>>r;

		r -= (x*n);
		if(r < 0) 
			cout<<-1<<"\n";
		else
			cout<<n - min(n, r/(y-x))<<" "<<min(n, r/(y-x))<<"\n";
	}
	return 0;
}
