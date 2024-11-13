#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ac1= 0, bc1 = 0;
		string a,b;
		cin>>n>>a>>b;
		for(int i=0;i<n;i++) {
			if(a[i]=='1')
				ac1++;
			if(b[i]=='1')
				bc1++;
		}
		cout<<(ac1 == bc1 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
