#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool paired = false;
		vector < bool > found(26, false);
		string s;

		cin>>n>>s;

		for(int i=0;i<n;i++) {
			if(!found[s[i] - 'a'])
				found[s[i] - 'a'] = true;
			else {
				paired = true;
				break;
			}
		}
		cout<<(paired ? n-2 : -1)<<"\n";
	}
	return 0;
}
