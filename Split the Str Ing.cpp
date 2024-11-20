#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		string s;
		vector < bool > occ(26, false);
		cin>>n>>s;
		for(int i=0;i<n-1;i++)
			occ[s[i]-'a'] = true;
		cout<<(occ[s[n-1] - 'a'] ? "YES" : "NO")<<"\n";
	}
	return 0;
}
