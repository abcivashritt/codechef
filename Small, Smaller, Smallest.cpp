#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,count = 0;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++) {
			if(s[i] == '1')
				count++;
		}
		cout<<(count>0?count%2:s.length())<<"\n";
	}
	return 0;
}
