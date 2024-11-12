#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(), a.rend());
		cout<<a[x-1]-1<<"\n";
	}
}
