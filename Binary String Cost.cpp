#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y;
		bool ones = false, zeros = false;
		string s;
		cin>>n>>x>>y>>s;
		while(n--) {
			if(s[n] == '1')
				ones = true;
			else
				zeros = true;
		}
		cout<<((ones & zeros) ? min(x,y) : 0)<<"\n";
	}
	return 0;
}
