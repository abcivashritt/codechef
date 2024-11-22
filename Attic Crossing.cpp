#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0, max_count = 0, days = 0;
		string s;
		cin>>s;
		n = s.length();
		for(int i=0;i<n;i++) {
			while(i < n && s[i] == '#')
				i++;
			if(i < n)
				count = 1;
			while(i < n && s[i] == '.') {
				i++;
				count++;
			}
			if(count > max_count) {
				days++;
				max_count = count;
			}
		}
		cout<<days<<"\n";
	}
	return 0;
}
