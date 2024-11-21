#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		bool yes = true;
		cin>>n;
		vector < int > a(n), b(n), c(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];

		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		for(int i=0;i<n;i++)
			c[i] = a[i] + b[i];

		for(int i=1;i<n;i++) {
			if(c[i] != c[i-1]) {
				yes = false;
				break;
			}
		}
		if(yes) {
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<"\n";
			for(int i=0;i<n;i++)
				cout<<b[i]<<" ";
			cout<<"\n";
		}
		else
			cout<<-1<<"\n";
	}
	return 0;
}
