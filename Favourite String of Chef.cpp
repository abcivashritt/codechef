#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, index;
		bool code = false;
		string s;
		cin>>n>>s;

		for(int i=0;i<n-3;i++) {
			if(s.substr(i, 4) == "chef") {
				index = i;
				break;
			}
		}
		for(int i=0;i<index-3;i++) {
			if(s.substr(i, 4) == "code") {
				code = true;
				break;
			}
		}
		cout<<(code ? "AC" : "WA")<<"\n";
	}
	return 0;
}
