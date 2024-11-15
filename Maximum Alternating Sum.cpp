#include <iostream>
#include <vector>
#include <algorithm>
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
		int i = 0, j = n-1;
		while(i < j) {
			sum += (a[j] - a[i]);
			i++;
			j--;
		}
		if(i == j)
			sum += a[i];
		cout<<sum<<"\n";
	}
	return 0;
}
