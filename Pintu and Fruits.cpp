#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, m, min_pos = INT_MAX, temp;
		cin>>n>>m;
		vector < int > occ(m+1, -1), f(n);
		for(int i=0;i<n;i++)
			cin>>f[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(occ[f[i]] == -1)
				occ[f[i]] = 0;
			occ[f[i]] += temp;
		}
		for(int i=0;i<=m;i++) {
			if(occ[i] != -1)
				min_pos = min(min_pos, occ[i]);
		}
		cout<<min_pos<<"\n";
	}
	return 0;
}
