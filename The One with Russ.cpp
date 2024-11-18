#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,k,temp, count = 0;
		cin>>n>>x>>k;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(abs(a[i] - temp) <= k)
				count++;
		}
		cout<<(count >= x ? "YES" : "NO")<<"\n";
	}
	return 0;
}
