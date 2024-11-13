#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int count=0,ans = 0;
		cin>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] == 'a' ||
					s[i] == 'e' ||
					s[i] == 'i' ||
					s[i] == 'o' ||
					s[i] == 'u')
				count++;
			else
				count = 0;
			ans = max(ans,count);
		}
		cout<<(ans > 2 ? "Happy" : "Sad")<<"\n";
	}
	return 0;
}
