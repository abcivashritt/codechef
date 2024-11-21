#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k,count = 0, max_count = 0;
		string s;
		cin>>n>>k>>s;

		for(int i=0;i<n;i++) {
			while(i < n && s[i] != '*')
				i++;
			if(i < n) {
				count = 1;
				i++;
			}
			while(i < n && s[i] == '*') {
				i++;
				count++;
			}
			max_count = max(max_count, count);
		}
		cout<<(max_count >= k ? "YES" : "NO")<<"\n";
	}
	return 0;
}
