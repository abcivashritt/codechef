#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > a(n), b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		int i = 0, j = 0;
		while(i < n) {
			i++;
			while(i < n && a[i] == a[i-1]) {
				i++;
			}
			while(j < i) {
				b[j] = n-i;
				j++;
			}
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
