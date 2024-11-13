#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, one, end, temp;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp == 1)
				one = i+1;
			else if(temp == n)
				end = i+1;
		}
		cout<<abs(1-one) + (n-end) - (end < one ? 1 : 0)<<"\n";
	}
	return 0;
}
