#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m, count = 0;
		cin>>n>>m;

		vector < string > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				for(int k=i+1, l=j+1;k<n && l<m;k++,l++) {
					if(a[i][j] == a[i][l] && a[i][j] == a[k][j] && a[i][j] == a[k][l])
						count++;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
