#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string s,t;
		int count = 0;
		vector < int > visited(128, false);

		cin>>s>>t;

		for(int i=0;i<s.length();i++) {
			visited[s[i]] = true;
		}
		for(int i=0;i<t.length();i++) {
			if(visited[t[i]]) {
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
