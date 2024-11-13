#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,sum = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		cout<<(sum%2 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
