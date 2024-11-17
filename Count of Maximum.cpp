#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, count, element, max_count;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());

		count = 1;
		element = a[0];
		max_count = 1;
		for(int i=1;i<n;i++) {
			while(i < n && a[i] == a[i-1]) {
				count++;
				i++;
			}
			if(count > max_count) {
				max_count = count;
				element = a[i-1];
			}
			else if(count == max_count && a[i-1] < element)
				element = a[i-1];
			count = 1;
		}
		cout<<element<<" "<<max_count<<"\n";
	}
	return 0;
}
