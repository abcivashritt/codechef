#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, q, c, sum = 0;
		vector < int > ct(26, 0);
		string s;

		cin>>n>>q>>s;
		for(int i=0;i<n;i++)
			ct[s[i] - 'a']++;
		while(q--) {
			cin>>c;
			sum = 0;
			for(int i=0;i<26;i++)
				sum += max(0, ct[i] - c);
			cout<<sum<<"\n";
		}
	}
	return 0;
}
