#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool y = false, i = false;
		string s;
		cin>>n>>s;
		while(n--) {
			if(s[n] == 'Y')
				y = true;
			else if(s[n] == 'I')
				i = true;
		}
		cout<<(y ? "NOT INDIAN" : (i ? "INDIAN" : "NOT SURE"))<<"\n";
	}
	return 0;
}
