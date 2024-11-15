#include <iostream>
#include <vector>
using namespace std;

bool attacking(vector < vector < bool > > c, int a, int b) {
	for(int i=0;i<c.size();i++) {
		if(c[a][i] || c[i][b])
			return true;
	}
	if(a-1 >= 0 && b-1 >= 0 && c[a-1][b-1])
		return true;
	if(a-1 >= 0 && b+1 < c.size() && c[a-1][b+1])
		return true;
	if(a+1 < c.size() && b-1 >= 0 && c[a+1][b-1])
		return true;
	if(a+1 < c.size() && b+1 < c.size() && c[a+1][b+1])
		return true;
	return false;
}

int pooks(vector < vector < bool > > c, int level) {
	int ans = 0;
	for(int i=0;i<c.size();i++) {
		for(int j=0;j<c.size();j++) {
			if(!c[i][j] && !attacking(c, i, j)) {
				vector < vector < bool > > a = c;
				a[i][j] = true;
				ans = max(ans, 1 + pooks(a, level + 1));
			}
		}
	}
	return ans;
}

void check() {
	for(int i=1;i<=10;i++) {
		vector < vector < bool > > c(i, vector < bool > (i, false));
		cout<<i<<" "<<pooks(c, 1)<<"\n";
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		if (n == 1)
			cout<<1;
		else if (n <= 3)
			cout<<n-1;
		else
			cout<<n;
		cout<<"\n";
	}
	return 0;
}
