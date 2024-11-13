#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a[2] = {0, 0};
		char c,prev='A';
		cin>>n;
		while(n--) {
			cin>>c;
			if(prev == c)
				a[c - 'A']++;
			prev = c;
		}
		cout<<a[0]<<" "<<a[1]<<"\n";
	}
	return 0;
}
