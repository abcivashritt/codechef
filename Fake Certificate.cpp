#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, one_count, zero_cont_count = 0, temp_count = 0;
		string s;
		cin>>n>>s;
		one_count = count(s.begin(), s.end(), '1');
		for(int i=0;i<n;i++) {
			while(i<n && s[i] == '0') {
				temp_count++;
				i++;
			}
			zero_cont_count = max(zero_cont_count, temp_count);
			temp_count = 0;
		}
		cout<<one_count + zero_cont_count<<"\n";
	}
	return 0;
}
