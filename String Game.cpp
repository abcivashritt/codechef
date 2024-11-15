#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool ans = true;
		string s;
		vector < int > count(26, 0);

		cin>>n>>s;

		for(int i=0;i<n;i++)
			count[s[i] - 'a']++;

		for(int i=0;i<26;i++) {
			if(count[i] % 2)
				ans = false;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
