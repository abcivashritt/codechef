#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,prev=0;
		bool ans = true;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp < prev)
				ans = false;
			prev = temp;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
