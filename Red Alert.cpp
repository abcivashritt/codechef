#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,d,h,curr = 0,temp;
		bool red = false;
		cin>>n>>d>>h;
		while(n--) {
			cin>>temp;
			if(temp == 0)
				curr = max(0, curr-d);
			else
				curr += temp;
			if(curr > h)
				red = true;
		}
		cout<<(red ? "YES" : "NO")<<"\n";
	}
	return 0;
}
