#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x = 0, y = 0;
		char prev = 'N';
		string s;

		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(((prev == 'L' || prev == 'R') && (s[i] == 'L' || s[i] == 'R')) ||
				((prev == 'U' || prev == 'D') && (s[i] == 'U' || s[i] == 'D')))
				continue;
			switch(s[i]) {
				case 'L': x--;
					break;
				case 'R': x++;
					break;
				case 'U': y++;
					break;
				case 'D': y--;
					break;
			}
			prev = s[i];
		}
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}
