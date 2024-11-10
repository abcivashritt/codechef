#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		bool ans = true;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp<=4)
				ans = false;
		}
		cout<<(ans?"YES":"NO")<<"\n";
	}
	return 0;
}
