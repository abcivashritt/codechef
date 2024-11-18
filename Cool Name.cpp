#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int sum = 0;
		string s;
		cin>>s;

		sort(s.begin(), s.end());
		for(int i=0;i<s.length();i++) {
			sum += (s[i] - 'a' + 1)*(i+1);
		}
		cout<<sum<<"\n";
	}
}
