#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k;
		string s,t,u,v = "";
		cin>>n>>s>>t>>u;
		k = (t[0] - s[0] + ('z' - 'a' + 1))%('z' - 'a' + 1);
		for(int i=0;i<u.length();i++)
			v = v + (char)('a' + (u[i] - 'a' + k)%('z' - 'a' + 1));
		cout<<v<<"\n";
	}
	return 0;
}
