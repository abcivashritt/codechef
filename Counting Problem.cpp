#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,sum = 0;
		bool odd_occ = false;
		cin>>n;
		while(n--) {
			cin>>temp;
			sum += temp;
			if(temp%2)
				odd_occ = true;
		}
		cout<<((sum%2 == 0 && odd_occ) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
