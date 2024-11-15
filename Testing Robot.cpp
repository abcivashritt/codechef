#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,n,ans = 1;
		string s;
		cin>>n>>x>>s;
		vector < bool > visited(201, false);
		x = 100;
		visited[x] = true;
		for(int i=0;i<n;i++) {
			if(s[i] == 'R')
				x++;
			else
				x--;
			if(!visited[x]) {
				ans++;
				visited[x] = true;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
