#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MOD 1000000007

int main() {
	int T;
	char vow[] = {'a', 'e', 'i', 'o' ,'u'};
	cin>>T;
	while(T--) {
		int n, ans = 1;
		bool is_vowel = false;
		string s;
		cin>>n>>s;
		
		vector < int > c(5, 0);
		for(int i=0;i<n;i++) {
			for(int j=0;j<5;j++) {
				c[j] = abs(s[i] - vow[j]);
				if(c[j] == 0)
					is_vowel = true;
				else
					is_vowel = false;
			}
			if(!is_vowel) {
				ans *= (count(c.begin(), c.end(), *min_element(c.begin(), c.end())));
				ans %= MOD;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
