#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		cin>>n>>s;
		int greater = 0, current = 0;
		for(int i=0;i<n;i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				greater = max(greater, current);
				current = 0;
			}
			else
				current++;
		}
		greater = max(greater, current);
		if(greater >= 4)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
