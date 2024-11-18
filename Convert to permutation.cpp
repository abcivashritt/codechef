#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, sum = 0;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		
		for(int i=0;i<n;i++) {
			sum += i+1-a[i];
			if(a[i] > i+1)
				sum = INT_MIN;
		}
		cout<<(sum < 0 ? -1 : sum)<<"\n";
	}
	return 0;
}
