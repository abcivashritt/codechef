#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,x,ai, max_element = 0;
		cin>>n>>x;
		while(n--) {
			cin>>ai;
			max_element = max(max_element, ai);
		}
		cout<<(max_element >= x ? "YES" : "NO")<<"\n";
	}
	return 0;
}
