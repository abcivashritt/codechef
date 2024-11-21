#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, c = 1, k, l;
		cin>>n;
		vector < vector < int > > a(n, vector < int > (n, 0));
		for(int j=0;j<n;j++) {
			k = 0,l = j;
			while(k < n && l >= 0) {
				a[k][l] = c;
				c++;
				k++;
				l--;
			}
		}
		for(int i=1;i<n;i++) {
			k = i, l = n-1;
			while(k < n && l >= 0) {
				a[k][l] = c;
				c++;
				k++;
				l--;
			}
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
