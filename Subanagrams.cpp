#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	string s, t = "";
	cin>>n;

	vector < vector < int > > c(n, vector < int > (26, 0));

	for(int i=0;i<n;i++) {
		cin>>s;
		for(int j=0;j<s.length();j++) {
			c[i][s[j] - 'a']++;
		}
	}
	for(int i=0;i<26;i++) {
		int lowest = 101;
		for(int j=0;j<n;j++)
			lowest = min(lowest, c[j][i]);
		t += string(lowest, char(i + 'a'));
	}
	cout<<(t.empty() ? "no such string" : t)<<"\n";
	return 0;
}
