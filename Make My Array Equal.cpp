#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0, zero = 0;
		cin>>n;
		vector < int > a(n);
		for(int i = 0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		for(int i=0;i<n;i++) {
			if(a[i] == a[0])
				count++;
			else if(a[i] == 0)
				zero++;
		}
		cout<<(count + zero == n ? "YES" : "NO")<<"\n";
	}
	return 0;
}
