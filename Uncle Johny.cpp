#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,ele;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		ele = a[k-1];
		sort(a.begin(), a.end());
		for(int i=0;i<n;i++) {
			if(a[i] == ele) {
				cout<<i+1<<"\n";
				break;
			}
		}
	}
	return 0;
}
