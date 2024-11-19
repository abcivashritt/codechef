#include <iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		set < string > visited;

		cin>>s;
		for(int i=0;i<s.length()-1;i++) {
			string u = string(1, s[i]) + string(1, s[i+1]);
			visited.insert(u);
		}
		cout<<visited.size()<<"\n";
	}
	return 0;
}
