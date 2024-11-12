#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,c = 0, n = 0;
		string s;
		cin>>x>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] == 'C')
				c+=2;
			else if(s[i] == 'N')
				n+=2;
		}
		if(c>n)
			cout<<x*60<<"\n";
		else if(c==n)
			cout<<x*55<<"\n";
		else
			cout<<x*40<<"\n";
	}
	return 0;
}
