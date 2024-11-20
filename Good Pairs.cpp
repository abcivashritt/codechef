#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, count = 1, sum = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		for(int i=1;i<n;i++) {
			while(i<n && a[i] == a[i-1]) {
				i++;
				count++;
			}
			sum += (count * (count-1))/2;
			count=1;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
