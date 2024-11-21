#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m;

		cin>>n>>m;
		vector < vector < int > > mat(n, vector < int > (m, 2));
		int i = 0, j = 0;
		for(;i<n && j<m;i++, j++)
			mat[i][j] = 3;
		while(i < n) {
			mat[i][m-1] = 3;
			i++;
		}
		while(j < m) {
			mat[n-1][j] = 3;
			j++;
		}

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++)
				cout<<mat[i][j]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}
