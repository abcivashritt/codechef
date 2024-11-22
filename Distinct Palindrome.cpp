#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, x;
		cin>>n>>x;
		if(x > (n+1)/2)
			cout<<-1<<"\n";
		else {
			string s = "";
			if(n%2) {
				s = string(1, char('a' + x - 1));
				x = max(1, --x);
				n--;
			}
			while(n > 0) {
				s = string(1, char('a' + x - 1)) + s + string(1, char('a' + x - 1));
				n-=2;
				x = max(1, --x);
			}
			cout<<s<<"\n";
		}
	}
	return 0;
}
