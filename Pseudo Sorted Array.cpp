#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,count = 0;
		cin>>n;
		vector < pair < int, int > > a(n);
		for(int i=0;i<n;i++) {
			cin>>temp;
			a[i] = pair <int, int> (temp, i);
		}
		sort(a.begin(), a.end());
		for(int i=0;i<n;i++) {
			if(a[i].second != i) {
				if(abs(a[i].second-i) == 1)
					count++;
				else
					count += 100;
			}
		}
		cout<<(count > 2 ? "NO" : "YES")<<"\n";
	}
}
