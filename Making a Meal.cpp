#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		vector < int > count(26, 0);

		cin>>n;
		while(n--) {
			cin>>s;
			for(int i=0;i<s.length();i++)
				count[s[i] - 'a']++;
		}
		cout<<min(count['c' - 'a']/2, 
				min(count['d' - 'a'], 
				min(count['e' - 'a']/2,
				min(count['o' - 'a'],
				min(count['h' - 'a'], count['f' - 'a'])))))<<"\n";
	}
	return 0;
}
