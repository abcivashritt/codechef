#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		bool even = false;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp%2 == 0)
				even = true;
		}
		cout<<(even ? "NO" : "YES")<<"\n";
	}
	return 0;
}
