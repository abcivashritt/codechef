#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, redem = 0, laddus = 0;
		string s;
		cin>>n>>s;
		if(s == "INDIAN")
			redem = 200;
		else
			redem = 400;

		while(n--) {
			cin>>s;
			if(s == "TOP_CONTRIBUTOR")
				laddus += 300;
			else if(s == "CONTEST_HOSTED")
				laddus += 50;
			else if(s == "CONTEST_WON") {
				int rank;
				cin>>rank;
				laddus += 300 + max(0, 20 - rank);
			}
			else if(s == "BUG_FOUND") {
				int sev;
				cin>>sev;
				laddus += sev;
			}
		}
		cout<<laddus / redem<<"\n";
	}
	return 0;
}
