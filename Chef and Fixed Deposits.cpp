#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,x,count = 0;
		cin>>n>>x;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		for(int i=0;i<n;i++) {
			if(x > 0) {
				x -= a[i];
				count++;
			}
		}
		cout<<(x <= 0 ? count : -1)<<"\n";
	}
	return 0;
}
