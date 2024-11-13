#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp, odd = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp % 2)
				odd++;
		}
		cout<<(n==1 ? 1 : odd%2 + 1)<<"\n";
	}
	return 0;
}
