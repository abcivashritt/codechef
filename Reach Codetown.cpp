#include <iostream>
using namespace std;

int main() {
	int t;
	bool a[] = {false, true, false, true, false, true, false, false};
	cin>>t;
	while(t--) {
		string s;
		bool ans = true;
		cin>>s;
		for(int i=0;i<s.length();i++) {
			bool check = (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U');
			if( !((check && a[i]) || (!check && !a[i])))
				ans = false;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
