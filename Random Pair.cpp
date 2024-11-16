#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,count = 0,lowest = INT_MAX;
		cin>>n;
		vector < int > a(n), sum(2001, 0);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				sum[(a[i] + a[j])]++;
				count++;
			}
		}
		for(int i=0;i<2002;i++) {
			if(sum[i] != 0)
				lowest = sum[i];
		}	
		cout<<fixed<<(double)lowest/(double)count<<"\n";
	}
	return 0;
}
