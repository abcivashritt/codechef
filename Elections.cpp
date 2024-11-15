#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,count = 0, temp, x;
		cin>>n>>x;
		vector < int > a(n),diff;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(a[i] > temp)
				count++;
			else
				diff.push_back(temp - a[i] + 1);
		}
		sort(diff.begin(), diff.end());
		int i=0;
		while(i < diff.size() && x-diff[i] >= 0) {
			x -= diff[i];
			count++;	
			i++;
		}
		cout<<(count > n-count ? "YES" : "NO")<<"\n";
	}
	return 0;
}
