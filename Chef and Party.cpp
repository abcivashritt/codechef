#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, curr = 0;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(), a.end());

		int i=0;
		while(i < n && a[i] <= curr) {
			curr++;
			i++;
		}
		cout<<curr<<"\n";
	}
	return 0;
}
